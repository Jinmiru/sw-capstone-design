// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SceneCaptureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
#ifdef ENGINE_SceneCaptureComponent_generated_h
#error "SceneCaptureComponent.generated.h already included, missing '#pragma once' in SceneCaptureComponent.h"
#endif
#define ENGINE_SceneCaptureComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEngineShowFlagsSetting_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEngineShowFlagsSetting>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_72_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetCaptureSortPriority); \
	DECLARE_FUNCTION(execClearHiddenComponents); \
	DECLARE_FUNCTION(execClearShowOnlyComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyActorComponents); \
	DECLARE_FUNCTION(execRemoveShowOnlyComponent); \
	DECLARE_FUNCTION(execShowOnlyActorComponents); \
	DECLARE_FUNCTION(execShowOnlyComponent); \
	DECLARE_FUNCTION(execHideActorComponents); \
	DECLARE_FUNCTION(execHideComponent);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_72_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_72_INCLASS \
private: \
	static void StaticRegisterNativesUSceneCaptureComponent(); \
	friend struct Z_Construct_UClass_USceneCaptureComponent_Statics; \
public: \
	DECLARE_CLASS(USceneCaptureComponent, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USceneCaptureComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_72_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USceneCaptureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USceneCaptureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USceneCaptureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USceneCaptureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USceneCaptureComponent(USceneCaptureComponent&&); \
	USceneCaptureComponent(const USceneCaptureComponent&); \
public: \
	ENGINE_API virtual ~USceneCaptureComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_69_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_72_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_72_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_72_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h_72_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USceneCaptureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent_h


#define FOREACH_ENUM_ESCENECAPTUREPRIMITIVERENDERMODE(op) \
	op(ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture) \
	op(ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives) \
	op(ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList) 

enum class ESceneCapturePrimitiveRenderMode : uint8;
template<> struct TIsUEnumClass<ESceneCapturePrimitiveRenderMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESceneCapturePrimitiveRenderMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
