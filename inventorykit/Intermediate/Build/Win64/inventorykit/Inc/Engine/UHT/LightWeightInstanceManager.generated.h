// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/LightWeightInstanceManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ENGINE_LightWeightInstanceManager_generated_h
#error "LightWeightInstanceManager.generated.h already included, missing '#pragma once' in LightWeightInstanceManager.h"
#endif
#define ENGINE_LightWeightInstanceManager_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_33_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_Transforms); \
	DECLARE_FUNCTION(execOnSpawnedActorDestroyed);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_33_INCLASS \
private: \
	static void StaticRegisterNativesALightWeightInstanceManager(); \
	friend struct Z_Construct_UClass_ALightWeightInstanceManager_Statics; \
public: \
	DECLARE_CLASS(ALightWeightInstanceManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ALightWeightInstanceManager) \
	virtual UObject* _getUObject() const override { return const_cast<ALightWeightInstanceManager*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepresentedClass=NETFIELD_REP_START, \
		InstanceTransforms, \
		FreeIndices, \
		ValidIndices, \
		NETFIELD_REP_END=ValidIndices	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ALightWeightInstanceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightWeightInstanceManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ALightWeightInstanceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightWeightInstanceManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALightWeightInstanceManager(ALightWeightInstanceManager&&); \
	ALightWeightInstanceManager(const ALightWeightInstanceManager&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_30_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_33_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_33_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ALightWeightInstanceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LightWeightInstanceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
