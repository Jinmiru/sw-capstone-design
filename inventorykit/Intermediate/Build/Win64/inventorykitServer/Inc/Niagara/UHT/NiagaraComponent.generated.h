// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMaterialInterface;
class UNiagaraComponent;
class UNiagaraDataInterface;
class UNiagaraSimCache;
class UNiagaraSystem;
class UObject;
class UStaticMesh;
class UTexture;
class UTextureRenderTarget;
enum class ENiagaraAgeUpdateMode : uint8;
enum class ENiagaraOcclusionQueryMode : uint8;
enum class ENiagaraTickBehavior : uint8;
struct FLinearColor;
#ifdef NIAGARA_NiagaraComponent_generated_h
#error "NiagaraComponent.generated.h already included, missing '#pragma once' in NiagaraComponent.h"
#endif
#define NIAGARA_NiagaraComponent_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_51_DELEGATE \
NIAGARA_API void FOnNiagaraSystemFinished_DelegateWrapper(const FMulticastScriptDelegate& OnNiagaraSystemFinished, UNiagaraComponent* PSystem);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_62_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetForceLocalPlayerEffect); \
	DECLARE_FUNCTION(execSetForceLocalPlayerEffect); \
	DECLARE_FUNCTION(execGetAllowScalability); \
	DECLARE_FUNCTION(execSetAllowScalability); \
	DECLARE_FUNCTION(execClearSimCache); \
	DECLARE_FUNCTION(execGetSimCache); \
	DECLARE_FUNCTION(execSetSimCache); \
	DECLARE_FUNCTION(execInitForPerformanceBaseline); \
	DECLARE_FUNCTION(execGetPreviewLODDistance); \
	DECLARE_FUNCTION(execGetPreviewLODDistanceEnabled); \
	DECLARE_FUNCTION(execSetPreviewLODDistance); \
	DECLARE_FUNCTION(execGetDataInterface); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execAdvanceSimulationByTime); \
	DECLARE_FUNCTION(execAdvanceSimulation); \
	DECLARE_FUNCTION(execSetRenderingEnabled); \
	DECLARE_FUNCTION(execReinitializeSystem); \
	DECLARE_FUNCTION(execResetSystem); \
	DECLARE_FUNCTION(execSetVariableTextureRenderTarget); \
	DECLARE_FUNCTION(execSetVariableTexture); \
	DECLARE_FUNCTION(execSetVariableStaticMesh); \
	DECLARE_FUNCTION(execSetVariableMaterial); \
	DECLARE_FUNCTION(execSetVariableObject); \
	DECLARE_FUNCTION(execSetNiagaraVariableObject); \
	DECLARE_FUNCTION(execSetVariableActor); \
	DECLARE_FUNCTION(execSetNiagaraVariableActor); \
	DECLARE_FUNCTION(execSetVariableBool); \
	DECLARE_FUNCTION(execSetNiagaraVariableBool); \
	DECLARE_FUNCTION(execSetVariableInt); \
	DECLARE_FUNCTION(execSetNiagaraVariableInt); \
	DECLARE_FUNCTION(execSetVariableFloat); \
	DECLARE_FUNCTION(execSetNiagaraVariableFloat); \
	DECLARE_FUNCTION(execSetVariableVec2); \
	DECLARE_FUNCTION(execSetNiagaraVariableVec2); \
	DECLARE_FUNCTION(execSetVariablePosition); \
	DECLARE_FUNCTION(execSetNiagaraVariablePosition); \
	DECLARE_FUNCTION(execSetVariableVec3); \
	DECLARE_FUNCTION(execSetNiagaraVariableVec3); \
	DECLARE_FUNCTION(execSetVariableMatrix); \
	DECLARE_FUNCTION(execSetNiagaraVariableMatrix); \
	DECLARE_FUNCTION(execSetVariableQuat); \
	DECLARE_FUNCTION(execSetNiagaraVariableQuat); \
	DECLARE_FUNCTION(execSetVariableVec4); \
	DECLARE_FUNCTION(execSetNiagaraVariableVec4); \
	DECLARE_FUNCTION(execSetVariableLinearColor); \
	DECLARE_FUNCTION(execSetNiagaraVariableLinearColor); \
	DECLARE_FUNCTION(execGetRandomSeedOffset); \
	DECLARE_FUNCTION(execSetRandomSeedOffset); \
	DECLARE_FUNCTION(execClearEmitterFixedBounds); \
	DECLARE_FUNCTION(execGetEmitterFixedBounds); \
	DECLARE_FUNCTION(execSetEmitterFixedBounds); \
	DECLARE_FUNCTION(execClearSystemFixedBounds); \
	DECLARE_FUNCTION(execGetSystemFixedBounds); \
	DECLARE_FUNCTION(execSetSystemFixedBounds); \
	DECLARE_FUNCTION(execGetTickBehavior); \
	DECLARE_FUNCTION(execSetTickBehavior); \
	DECLARE_FUNCTION(execSetAutoDestroy); \
	DECLARE_FUNCTION(execSetMaxSimTime); \
	DECLARE_FUNCTION(execGetMaxSimTime); \
	DECLARE_FUNCTION(execSetLockDesiredAgeDeltaTimeToSeekDelta); \
	DECLARE_FUNCTION(execGetLockDesiredAgeDeltaTimeToSeekDelta); \
	DECLARE_FUNCTION(execSetSeekDelta); \
	DECLARE_FUNCTION(execGetSeekDelta); \
	DECLARE_FUNCTION(execSetCanRenderWhileSeeking); \
	DECLARE_FUNCTION(execSeekToDesiredAge); \
	DECLARE_FUNCTION(execSetDesiredAge); \
	DECLARE_FUNCTION(execGetDesiredAge); \
	DECLARE_FUNCTION(execSetAgeUpdateMode); \
	DECLARE_FUNCTION(execGetAgeUpdateMode); \
	DECLARE_FUNCTION(execGetCustomTimeDilation); \
	DECLARE_FUNCTION(execSetCustomTimeDilation); \
	DECLARE_FUNCTION(execSetGpuComputeDebug); \
	DECLARE_FUNCTION(execGetForceSolo); \
	DECLARE_FUNCTION(execSetForceSolo); \
	DECLARE_FUNCTION(execGetOcclusionQueryMode); \
	DECLARE_FUNCTION(execSetOcclusionQueryMode); \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execSetAsset);


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_62_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UNiagaraComponent, NIAGARA_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraComponent(); \
	friend struct Z_Construct_UClass_UNiagaraComponent_Statics; \
public: \
	DECLARE_CLASS(UNiagaraComponent, UFXSystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraComponent) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_62_ARCHIVESERIALIZER


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraComponent(UNiagaraComponent&&); \
	UNiagaraComponent(const UNiagaraComponent&); \
public: \
	NIAGARA_API virtual ~UNiagaraComponent();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_58_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_62_RPC_WRAPPERS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_62_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h


#define FOREACH_ENUM_ENIAGARAOCCLUSIONQUERYMODE(op) \
	op(ENiagaraOcclusionQueryMode::Default) \
	op(ENiagaraOcclusionQueryMode::AlwaysEnabled) \
	op(ENiagaraOcclusionQueryMode::AlwaysDisabled) 

enum class ENiagaraOcclusionQueryMode : uint8;
template<> struct TIsUEnumClass<ENiagaraOcclusionQueryMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraOcclusionQueryMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
