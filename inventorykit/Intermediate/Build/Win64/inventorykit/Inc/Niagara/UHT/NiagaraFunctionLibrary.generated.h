// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNiagaraComponent;
class UNiagaraParameterCollection;
class UNiagaraParameterCollectionInstance;
class UNiagaraSystem;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;
class UTexture2DArray;
class UTexture;
class UVolumeTexture;
enum class ENCPoolMethod : uint8;
struct FFXSystemSpawnParameters;
#ifdef NIAGARA_NiagaraFunctionLibrary_generated_h
#error "NiagaraFunctionLibrary.generated.h already included, missing '#pragma once' in NiagaraFunctionLibrary.h"
#endif
#define NIAGARA_NiagaraFunctionLibrary_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execReleaseNiagaraGPURayTracedCollisionGroup); \
	DECLARE_FUNCTION(execAcquireNiagaraGPURayTracedCollisionGroup); \
	DECLARE_FUNCTION(execSetActorNiagaraGPURayTracedCollisionGroup); \
	DECLARE_FUNCTION(execSetComponentNiagaraGPURayTracedCollisionGroup); \
	DECLARE_FUNCTION(execGetNiagaraParameterCollection); \
	DECLARE_FUNCTION(execSetVolumeTextureObject); \
	DECLARE_FUNCTION(execSetTexture2DArrayObject); \
	DECLARE_FUNCTION(execSetTextureObject); \
	DECLARE_FUNCTION(execSetSkeletalMeshDataInterfaceFilteredSockets); \
	DECLARE_FUNCTION(execSetSkeletalMeshDataInterfaceFilteredBones); \
	DECLARE_FUNCTION(execSetSkeletalMeshDataInterfaceSamplingRegions); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableSkeletalMeshComponent); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableStaticMesh); \
	DECLARE_FUNCTION(execOverrideSystemUserVariableStaticMeshComponent); \
	DECLARE_FUNCTION(execSpawnSystemAttached); \
	DECLARE_FUNCTION(execSpawnSystemAtLocation); \
	DECLARE_FUNCTION(execSpawnSystemAttachedWithParams); \
	DECLARE_FUNCTION(execSpawnSystemAtLocationWithParams);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraFunctionLibrary(); \
	friend struct Z_Construct_UClass_UNiagaraFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UNiagaraFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraFunctionLibrary)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraFunctionLibrary(UNiagaraFunctionLibrary&&); \
	UNiagaraFunctionLibrary(const UNiagaraFunctionLibrary&); \
public: \
	NIAGARA_API virtual ~UNiagaraFunctionLibrary();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_24_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
