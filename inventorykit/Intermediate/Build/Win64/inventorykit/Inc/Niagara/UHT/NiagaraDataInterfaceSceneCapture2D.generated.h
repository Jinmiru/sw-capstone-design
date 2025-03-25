// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataInterface/NiagaraDataInterfaceSceneCapture2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UNiagaraComponent;
#ifdef NIAGARA_NiagaraDataInterfaceSceneCapture2D_generated_h
#error "NiagaraDataInterfaceSceneCapture2D.generated.h already included, missing '#pragma once' in NiagaraDataInterfaceSceneCapture2D.h"
#endif
#define NIAGARA_NiagaraDataInterfaceSceneCapture2D_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_44_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSceneCapture2DManagedShowOnlyActors);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraDataInterfaceSceneCapture2D(); \
	friend struct Z_Construct_UClass_UNiagaraDataInterfaceSceneCapture2D_Statics; \
public: \
	DECLARE_CLASS(UNiagaraDataInterfaceSceneCapture2D, UNiagaraDataInterface, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraDataInterfaceSceneCapture2D)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraDataInterfaceSceneCapture2D(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraDataInterfaceSceneCapture2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraDataInterfaceSceneCapture2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraDataInterfaceSceneCapture2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraDataInterfaceSceneCapture2D(UNiagaraDataInterfaceSceneCapture2D&&); \
	UNiagaraDataInterfaceSceneCapture2D(const UNiagaraDataInterfaceSceneCapture2D&); \
public: \
	NIAGARA_API virtual ~UNiagaraDataInterfaceSceneCapture2D();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_41_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_44_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_44_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraDataInterfaceSceneCapture2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceSceneCapture2D_h


#define FOREACH_ENUM_ENDISCENECAPTURE2DSOURCEMODE(op) \
	op(ENDISceneCapture2DSourceMode::UserParameterThenAttachParent) \
	op(ENDISceneCapture2DSourceMode::UserParameterOnly) \
	op(ENDISceneCapture2DSourceMode::AttachParentOnly) \
	op(ENDISceneCapture2DSourceMode::Managed) 

enum class ENDISceneCapture2DSourceMode : uint8;
template<> struct TIsUEnumClass<ENDISceneCapture2DSourceMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENDISceneCapture2DSourceMode>();

#define FOREACH_ENUM_ENDISCENECAPTURE2DOFFSETMODE(op) \
	op(ENDISceneCapture2DOffsetMode::Disabled) \
	op(ENDISceneCapture2DOffsetMode::RelativeLocal) \
	op(ENDISceneCapture2DOffsetMode::RelativeWorld) \
	op(ENDISceneCapture2DOffsetMode::AbsoluteWorld) 

enum class ENDISceneCapture2DOffsetMode : uint8;
template<> struct TIsUEnumClass<ENDISceneCapture2DOffsetMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENDISceneCapture2DOffsetMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
