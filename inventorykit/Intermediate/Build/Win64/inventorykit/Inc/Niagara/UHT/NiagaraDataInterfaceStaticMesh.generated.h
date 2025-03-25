// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceStaticMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNiagaraComponent;
#ifdef NIAGARA_NiagaraDataInterfaceStaticMesh_generated_h
#error "NiagaraDataInterfaceStaticMesh.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceStaticMesh.h"
#endif
#define NIAGARA_NiagaraDataInterfaceStaticMesh_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNDIStaticMeshSectionFilter>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnSourceEndPlay); \
	DECLARE_FUNCTION(execSetNiagaraStaticMeshDIInstanceIndex);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceStaticMesh(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceStaticMesh, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceStaticMesh)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceStaticMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceStaticMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceStaticMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceStaticMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceStaticMesh(UNiagaraDataInterfaceStaticMesh&&); \
	UNiagaraDataInterfaceStaticMesh(const UNiagaraDataInterfaceStaticMesh&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceStaticMesh();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_52_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceStaticMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Internal_DataInterface_NiagaraDataInterfaceStaticMesh_h


#define FOREACH_ENUM_ENDISTATICMESH_SOURCEMODE(op) \
	op(ENDIStaticMesh_SourceMode::Default) \
	op(ENDIStaticMesh_SourceMode::Source) \
	op(ENDIStaticMesh_SourceMode::AttachParent) \
	op(ENDIStaticMesh_SourceMode::DefaultMeshOnly) \
	op(ENDIStaticMesh_SourceMode::MeshParameterBinding) 

enum class ENDIStaticMesh_SourceMode : uint8;
template<> struct TIsUEnumClass<ENDIStaticMesh_SourceMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENDIStaticMesh_SourceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
