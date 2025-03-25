// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
#ifdef NIAGARA_NiagaraDataInterfaceUObjectPropertyReader_generated_h
#error "NiagaraDataInterfaceUObjectPropertyReader.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceUObjectPropertyReader.h"
#endif
#define NIAGARA_NiagaraDataInterfaceUObjectPropertyReader_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraUObjectPropertyReaderRemap>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_47_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetUObjectReaderPropertyRemap);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_47_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceUObjectPropertyReader(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceUObjectPropertyReader, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceUObjectPropertyReader)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceUObjectPropertyReader(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceUObjectPropertyReader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceUObjectPropertyReader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceUObjectPropertyReader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceUObjectPropertyReader(UNiagaraDataInterfaceUObjectPropertyReader&&); \
	UNiagaraDataInterfaceUObjectPropertyReader(const UNiagaraDataInterfaceUObjectPropertyReader&); \
public: \
	NO_API virtual ~UNiagaraDataInterfaceUObjectPropertyReader();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_44_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_47_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_47_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceUObjectPropertyReader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h


#define FOREACH_ENUM_ENDIOBJECTPROPERTYREADERSOURCEMODE(op) \
	op(ENDIObjectPropertyReaderSourceMode::Binding) \
	op(ENDIObjectPropertyReaderSourceMode::AttachParentActor) \
	op(ENDIObjectPropertyReaderSourceMode::BindingThenAttachParentActor) 

enum class ENDIObjectPropertyReaderSourceMode : uint8;
template<> struct TIsUEnumClass<ENDIObjectPropertyReaderSourceMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENDIObjectPropertyReaderSourceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
