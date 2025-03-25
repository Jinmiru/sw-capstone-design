// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HotSpots/AIHotSpotManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_AIHotSpotManager_generated_h
#error "AIHotSpotManager.generated.h already included, missing '#pragma once' in AIHotSpotManager.h"
#endif
#define AIMODULE_AIHotSpotManager_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAIHotSpotManager(); \
	friend struct Z_Construct_UClass_UAIHotSpotManager_Statics; \
public: \
	DECLARE_CLASS(UAIHotSpotManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UAIHotSpotManager)


#define FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UAIHotSpotManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIHotSpotManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UAIHotSpotManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIHotSpotManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAIHotSpotManager(UAIHotSpotManager&&); \
	UAIHotSpotManager(const UAIHotSpotManager&); \
public: \
	AIMODULE_API virtual ~UAIHotSpotManager();


#define FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_9_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_12_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UAIHotSpotManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_HotSpots_AIHotSpotManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
