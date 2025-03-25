// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosBlueprint.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AChaosSolverActor;
class AGeometryCollectionActor;
enum class EChaosBreakingSortMethod : uint8;
enum class EChaosCollisionSortMethod : uint8;
enum class EChaosRemovalSortMethod : uint8;
enum class EChaosTrailingSortMethod : uint8;
struct FChaosBreakingEventData;
struct FChaosBreakingEventRequestSettings;
struct FChaosCollisionEventData;
struct FChaosCollisionEventRequestSettings;
struct FChaosRemovalEventData;
struct FChaosRemovalEventRequestSettings;
struct FChaosTrailingEventData;
struct FChaosTrailingEventRequestSettings;
#ifdef GEOMETRYCOLLECTIONENGINE_ChaosBlueprint_generated_h
#error "ChaosBlueprint.generated.h already included, missing '#pragma once' in ChaosBlueprint.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_ChaosBlueprint_generated_h

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_23_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosCollisionEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosCollisionEvents, TArray<FChaosCollisionEventData> const& CollisionEvents);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_28_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosBreakingEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosBreakingEvents, TArray<FChaosBreakingEventData> const& BreakingEvents);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_33_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosTrailingEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosTrailingEvents, TArray<FChaosTrailingEventData> const& TrailingEvents);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_38_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosRemovalEvents_DelegateWrapper(const FMulticastScriptDelegate& OnChaosRemovalEvents, TArray<FChaosRemovalEventData> const& RemovalEvents);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSortRemovalEvents); \
	DECLARE_FUNCTION(execSortTrailingEvents); \
	DECLARE_FUNCTION(execSortBreakingEvents); \
	DECLARE_FUNCTION(execSortCollisionEvents); \
	DECLARE_FUNCTION(execIsEventListening); \
	DECLARE_FUNCTION(execSetRemovalEventEnabled); \
	DECLARE_FUNCTION(execSetTrailingEventEnabled); \
	DECLARE_FUNCTION(execSetBreakingEventEnabled); \
	DECLARE_FUNCTION(execSetCollisionEventEnabled); \
	DECLARE_FUNCTION(execSetRemovalEventRequestSettings); \
	DECLARE_FUNCTION(execSetTrailingEventRequestSettings); \
	DECLARE_FUNCTION(execSetBreakingEventRequestSettings); \
	DECLARE_FUNCTION(execSetCollisionEventRequestSettings); \
	DECLARE_FUNCTION(execRemoveGeometryCollectionActor); \
	DECLARE_FUNCTION(execAddGeometryCollectionActor); \
	DECLARE_FUNCTION(execRemoveChaosSolverActor); \
	DECLARE_FUNCTION(execAddChaosSolverActor);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_INCLASS \
private: \
	static void StaticRegisterNativesUChaosDestructionListener(); \
	friend struct Z_Construct_UClass_UChaosDestructionListener_Statics; \
public: \
	DECLARE_CLASS(UChaosDestructionListener, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), GEOMETRYCOLLECTIONENGINE_API) \
	DECLARE_SERIALIZER(UChaosDestructionListener)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONENGINE_API UChaosDestructionListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosDestructionListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONENGINE_API, UChaosDestructionListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosDestructionListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosDestructionListener(UChaosDestructionListener&&); \
	UChaosDestructionListener(const UChaosDestructionListener&); \
public: \
	GEOMETRYCOLLECTIONENGINE_API virtual ~UChaosDestructionListener();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_42_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_INCLASS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h_45_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class UChaosDestructionListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBlueprint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
