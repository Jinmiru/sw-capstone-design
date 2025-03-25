// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceConsoleVariable.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceConsoleVariable_generated_h
#error "NiagaraDataInterfaceConsoleVariable.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceConsoleVariable.h"
#endif
#define NIAGARA_NiagaraDataInterfaceConsoleVariable_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceConsoleVariable(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceConsoleVariable_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceConsoleVariable, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceConsoleVariable)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceConsoleVariable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceConsoleVariable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceConsoleVariable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceConsoleVariable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceConsoleVariable(UNiagaraDataInterfaceConsoleVariable&&); \
	UNiagaraDataInterfaceConsoleVariable(const UNiagaraDataInterfaceConsoleVariable&); \
public: \
	NO_API virtual ~UNiagaraDataInterfaceConsoleVariable();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h_12_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h_15_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceConsoleVariable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceConsoleVariable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
