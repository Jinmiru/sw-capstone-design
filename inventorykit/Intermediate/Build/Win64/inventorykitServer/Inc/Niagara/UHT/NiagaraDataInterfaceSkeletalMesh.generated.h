// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraDataInterfaceSkeletalMesh.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef NIAGARA_NiagaraDataInterfaceSkeletalMesh_generated_h
#error "NiagaraDataInterfaceSkeletalMesh.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceSkeletalMesh.h"
#endif
#define NIAGARA_NiagaraDataInterfaceSkeletalMesh_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnSourceEndPlay);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceSkeletalMesh(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceSkeletalMesh, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceSkeletalMesh)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceSkeletalMesh(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceSkeletalMesh) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceSkeletalMesh); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceSkeletalMesh); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceSkeletalMesh(UNiagaraDataInterfaceSkeletalMesh&&); \
	UNiagaraDataInterfaceSkeletalMesh(const UNiagaraDataInterfaceSkeletalMesh&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceSkeletalMesh();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_687_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_690_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceSkeletalMesh>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h


#define FOREACH_ENUM_ENDISKELETALMESH_SOURCEMODE(op) \
	op(ENDISkeletalMesh_SourceMode::Default) \
	op(ENDISkeletalMesh_SourceMode::Source) \
	op(ENDISkeletalMesh_SourceMode::AttachParent) \
	op(ENDISkeletalMesh_SourceMode::DefaultMeshOnly) 

enum class ENDISkeletalMesh_SourceMode : uint8;
template<> struct TIsUEnumClass<ENDISkeletalMesh_SourceMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENDISkeletalMesh_SourceMode>();

#define FOREACH_ENUM_ENDISKELETALMESH_SKINNINGMODE(op) \
	op(ENDISkeletalMesh_SkinningMode::Invalid) \
	op(ENDISkeletalMesh_SkinningMode::None) \
	op(ENDISkeletalMesh_SkinningMode::SkinOnTheFly) \
	op(ENDISkeletalMesh_SkinningMode::PreSkin) 

enum class ENDISkeletalMesh_SkinningMode : uint8;
template<> struct TIsUEnumClass<ENDISkeletalMesh_SkinningMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENDISkeletalMesh_SkinningMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
