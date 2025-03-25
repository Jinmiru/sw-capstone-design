// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceRW.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraDataInterfaceRW_generated_h
#error "NiagaraDataInterfaceRW.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceRW.h"
#endif
#define NIAGARA_NiagaraDataInterfaceRW_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_111_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceRWBase(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceRWBase_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceRWBase, UNiagaraDataInterface, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceRWBase)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_111_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceRWBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceRWBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceRWBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceRWBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceRWBase(UNiagaraDataInterfaceRWBase&&); \
	UNiagaraDataInterfaceRWBase(const UNiagaraDataInterfaceRWBase&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceRWBase();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_108_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_111_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_111_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_111_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceRWBase>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_191_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceGrid3D(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceGrid3D_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceGrid3D, UNiagaraDataInterfaceRWBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceGrid3D)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_191_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceGrid3D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceGrid3D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceGrid3D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceGrid3D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceGrid3D(UNiagaraDataInterfaceGrid3D&&); \
	UNiagaraDataInterfaceGrid3D(const UNiagaraDataInterfaceGrid3D&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceGrid3D();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_188_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_191_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_191_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_191_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceGrid3D>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_249_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceGrid2D, NIAGARA_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_249_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceGrid2D(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceGrid2D_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceGrid2D, UNiagaraDataInterfaceRWBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceGrid2D) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_249_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_249_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceGrid2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceGrid2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceGrid2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceGrid2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceGrid2D(UNiagaraDataInterfaceGrid2D&&); \
	UNiagaraDataInterfaceGrid2D(const UNiagaraDataInterfaceGrid2D&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceGrid2D();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_246_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_249_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_249_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h_249_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceGrid2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceRW_h


#define FOREACH_ENUM_ESETRESOLUTIONMETHOD(op) \
	op(ESetResolutionMethod::Independent) \
	op(ESetResolutionMethod::MaxAxis) \
	op(ESetResolutionMethod::CellSize) 

enum class ESetResolutionMethod;
template<> struct TIsUEnumClass<ESetResolutionMethod> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ESetResolutionMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
