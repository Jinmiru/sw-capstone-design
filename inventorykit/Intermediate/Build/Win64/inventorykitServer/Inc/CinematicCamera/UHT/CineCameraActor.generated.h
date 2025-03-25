// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CineCameraActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCineCameraComponent;
#ifdef CINEMATICCAMERA_CineCameraActor_generated_h
#error "CineCameraActor.generated.h already included, missing '#pragma once' in CineCameraActor.h"
#endif
#define CINEMATICCAMERA_CineCameraActor_generated_h

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraLookatTrackingSettings>();

#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCineCameraComponent);


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACineCameraActor(); \
	friend struct Z_Construct_UClass_ACineCameraActor_Statics; \
public: \
	DECLARE_CLASS(ACineCameraActor, ACameraActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), CINEMATICCAMERA_API) \
	DECLARE_SERIALIZER(ACineCameraActor)


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_71_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACineCameraActor(ACineCameraActor&&); \
	ACineCameraActor(const ACineCameraActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CINEMATICCAMERA_API, ACineCameraActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACineCameraActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACineCameraActor) \
	CINEMATICCAMERA_API virtual ~ACineCameraActor();


#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_68_PROLOG
#define FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_71_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICCAMERA_API UClass* StaticClass<class ACineCameraActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
