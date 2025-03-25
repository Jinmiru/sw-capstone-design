// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceArrayFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
struct FLinearColor;
#ifdef NIAGARA_NiagaraDataInterfaceArrayFunctionLibrary_generated_h
#error "NiagaraDataInterfaceArrayFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceArrayFunctionLibrary.h"
#endif
#define NIAGARA_NiagaraDataInterfaceArrayFunctionLibrary_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNiagaraArrayBoolValue); \
	DECLARE_FUNCTION(execGetNiagaraArrayUInt8Value); \
	DECLARE_FUNCTION(execGetNiagaraArrayInt32Value); \
	DECLARE_FUNCTION(execGetNiagaraArrayMatrixValue); \
	DECLARE_FUNCTION(execGetNiagaraArrayQuatValue); \
	DECLARE_FUNCTION(execGetNiagaraArrayColorValue); \
	DECLARE_FUNCTION(execGetNiagaraArrayVector4Value); \
	DECLARE_FUNCTION(execGetNiagaraArrayPositionValue); \
	DECLARE_FUNCTION(execGetNiagaraArrayVectorValue); \
	DECLARE_FUNCTION(execGetNiagaraArrayVector2DValue); \
	DECLARE_FUNCTION(execGetNiagaraArrayFloatValue); \
	DECLARE_FUNCTION(execSetNiagaraArrayBoolValue); \
	DECLARE_FUNCTION(execSetNiagaraArrayUInt8Value); \
	DECLARE_FUNCTION(execSetNiagaraArrayInt32Value); \
	DECLARE_FUNCTION(execSetNiagaraArrayMatrixValue); \
	DECLARE_FUNCTION(execSetNiagaraArrayQuatValue); \
	DECLARE_FUNCTION(execSetNiagaraArrayColorValue); \
	DECLARE_FUNCTION(execSetNiagaraArrayVector4Value); \
	DECLARE_FUNCTION(execSetNiagaraArrayPositionValue); \
	DECLARE_FUNCTION(execSetNiagaraArrayVectorValue); \
	DECLARE_FUNCTION(execSetNiagaraArrayVector2DValue); \
	DECLARE_FUNCTION(execSetNiagaraArrayFloatValue); \
	DECLARE_FUNCTION(execGetNiagaraArrayBool); \
	DECLARE_FUNCTION(execGetNiagaraArrayUInt8); \
	DECLARE_FUNCTION(execGetNiagaraArrayInt32); \
	DECLARE_FUNCTION(execGetNiagaraArrayMatrix); \
	DECLARE_FUNCTION(execGetNiagaraArrayQuat); \
	DECLARE_FUNCTION(execGetNiagaraArrayColor); \
	DECLARE_FUNCTION(execGetNiagaraArrayVector4); \
	DECLARE_FUNCTION(execGetNiagaraArrayPosition); \
	DECLARE_FUNCTION(execGetNiagaraArrayVector); \
	DECLARE_FUNCTION(execGetNiagaraArrayVector2D); \
	DECLARE_FUNCTION(execGetNiagaraArrayFloat); \
	DECLARE_FUNCTION(execSetNiagaraArrayBool); \
	DECLARE_FUNCTION(execSetNiagaraArrayUInt8); \
	DECLARE_FUNCTION(execSetNiagaraArrayInt32); \
	DECLARE_FUNCTION(execSetNiagaraArrayMatrix); \
	DECLARE_FUNCTION(execSetNiagaraArrayQuat); \
	DECLARE_FUNCTION(execSetNiagaraArrayColor); \
	DECLARE_FUNCTION(execSetNiagaraArrayVector4); \
	DECLARE_FUNCTION(execSetNiagaraArrayPosition); \
	DECLARE_FUNCTION(execSetNiagaraArrayVector); \
	DECLARE_FUNCTION(execSetNiagaraArrayVector2D); \
	DECLARE_FUNCTION(execSetNiagaraArrayFloat);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceArrayFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceArrayFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceArrayFunctionLibrary)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceArrayFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceArrayFunctionLibrary(UNiagaraDataInterfaceArrayFunctionLibrary&&); \
	UNiagaraDataInterfaceArrayFunctionLibrary(const UNiagaraDataInterfaceArrayFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceArrayFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceArrayFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceArrayFunctionLibrary) \
	NIAGARA_API virtual ~UNiagaraDataInterfaceArrayFunctionLibrary();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_13_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceArrayFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
