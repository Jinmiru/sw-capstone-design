// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceRigidMeshCollisionQuery.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNiagaraComponent;
#ifdef NIAGARA_NiagaraDataInterfaceRigidMeshCollisionQuery_generated_h
#error "NiagaraDataInterfaceRigidMeshCollisionQuery.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceRigidMeshCollisionQuery.h"
#endif
#define NIAGARA_NiagaraDataInterfaceRigidMeshCollisionQuery_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_182_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceRigidMeshCollisionQuery(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceRigidMeshCollisionQuery_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceRigidMeshCollisionQuery, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceRigidMeshCollisionQuery)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_182_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraDataInterfaceRigidMeshCollisionQuery(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceRigidMeshCollisionQuery) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraDataInterfaceRigidMeshCollisionQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceRigidMeshCollisionQuery); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceRigidMeshCollisionQuery(UNiagaraDataInterfaceRigidMeshCollisionQuery&&); \
	UNiagaraDataInterfaceRigidMeshCollisionQuery(const UNiagaraDataInterfaceRigidMeshCollisionQuery&); \
public: \
	NO_API virtual ~UNiagaraDataInterfaceRigidMeshCollisionQuery();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_179_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_182_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_182_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_182_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceRigidMeshCollisionQuery>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSourceActors);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraDIRigidMeshCollisionFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraDIRigidMeshCollisionFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDIRigidMeshCollisionFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDIRigidMeshCollisionFunctionLibrary)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDIRigidMeshCollisionFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDIRigidMeshCollisionFunctionLibrary(UNiagaraDIRigidMeshCollisionFunctionLibrary&&); \
	UNiagaraDIRigidMeshCollisionFunctionLibrary(const UNiagaraDIRigidMeshCollisionFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDIRigidMeshCollisionFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDIRigidMeshCollisionFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDIRigidMeshCollisionFunctionLibrary) \
	NIAGARA_API virtual ~UNiagaraDIRigidMeshCollisionFunctionLibrary();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_302_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h_305_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDIRigidMeshCollisionFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataInterfaceRigidMeshCollisionQuery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
