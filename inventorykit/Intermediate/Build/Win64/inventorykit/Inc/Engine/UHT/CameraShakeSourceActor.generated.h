// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraShakeSourceActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraShakeSourceActor_generated_h
#error "CameraShakeSourceActor.generated.h already included, missing '#pragma once' in CameraShakeSourceActor.h"
#endif
#define ENGINE_CameraShakeSourceActor_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraShakeSourceActor(); \
	friend struct Z_Construct_UClass_ACameraShakeSourceActor_Statics; \
public: \
	DECLARE_CLASS(ACameraShakeSourceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ACameraShakeSourceActor)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACameraShakeSourceActor(ACameraShakeSourceActor&&); \
	ACameraShakeSourceActor(const ACameraShakeSourceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ACameraShakeSourceActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraShakeSourceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraShakeSourceActor) \
	ENGINE_API virtual ~ACameraShakeSourceActor();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ACameraShakeSourceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
