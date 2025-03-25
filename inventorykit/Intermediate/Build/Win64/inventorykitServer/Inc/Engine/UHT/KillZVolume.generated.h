// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/KillZVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_KillZVolume_generated_h
#error "KillZVolume.generated.h already included, missing '#pragma once' in KillZVolume.h"
#endif
#define ENGINE_KillZVolume_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAKillZVolume(); \
	friend struct Z_Construct_UClass_AKillZVolume_Statics; \
public: \
	DECLARE_CLASS(AKillZVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AKillZVolume)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AKillZVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKillZVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AKillZVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKillZVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AKillZVolume(AKillZVolume&&); \
	AKillZVolume(const AKillZVolume&); \
public: \
	ENGINE_API virtual ~AKillZVolume();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AKillZVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_KillZVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
