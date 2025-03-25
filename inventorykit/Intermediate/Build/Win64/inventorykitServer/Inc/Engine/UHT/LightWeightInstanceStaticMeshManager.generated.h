// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/LightWeightInstanceStaticMeshManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FActorInstanceHandle;
#ifdef ENGINE_LightWeightInstanceStaticMeshManager_generated_h
#error "LightWeightInstanceStaticMeshManager.generated.h already included, missing '#pragma once' in LightWeightInstanceStaticMeshManager.h"
#endif
#define ENGINE_LightWeightInstanceStaticMeshManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_12_DELEGATE \
ENGINE_API FActorInstanceHandle FOnActorReady_DelegateWrapper(const FScriptDelegate& OnActorReady, FActorInstanceHandle InHandle);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_17_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_StaticMesh);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_17_INCLASS \
private: \
	static void StaticRegisterNativesALightWeightInstanceStaticMeshManager(); \
	friend struct Z_Construct_UClass_ALightWeightInstanceStaticMeshManager_Statics; \
public: \
	DECLARE_CLASS(ALightWeightInstanceStaticMeshManager, ALightWeightInstanceManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALightWeightInstanceStaticMeshManager) \
	virtual UObject* _getUObject() const override { return const_cast<ALightWeightInstanceStaticMeshManager*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		StaticMesh=NETFIELD_REP_START, \
		RenderingIndicesToDataIndices, \
		DataIndicesToRenderingIndices, \
		NETFIELD_REP_END=DataIndicesToRenderingIndices	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALightWeightInstanceStaticMeshManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightWeightInstanceStaticMeshManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALightWeightInstanceStaticMeshManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightWeightInstanceStaticMeshManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALightWeightInstanceStaticMeshManager(ALightWeightInstanceStaticMeshManager&&); \
	ALightWeightInstanceStaticMeshManager(const ALightWeightInstanceStaticMeshManager&); \
public: \
	ENGINE_API virtual ~ALightWeightInstanceStaticMeshManager();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_17_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_17_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALightWeightInstanceStaticMeshManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceStaticMeshManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
