// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraModifier_CameraShake.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraModifier_CameraShake_generated_h
#error "CameraModifier_CameraShake.generated.h already included, missing '#pragma once' in CameraModifier_CameraShake.h"
#endif
#define ENGINE_CameraModifier_CameraShake_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPooledCameraShakes_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPooledCameraShakes>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActiveCameraShakeInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_145_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraModifier_CameraShake(); \
	friend struct Z_Construct_UClass_UCameraModifier_CameraShake_Statics; \
public: \
	DECLARE_CLASS(UCameraModifier_CameraShake, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCameraModifier_CameraShake) \
	static const TCHAR* StaticConfigName() {return TEXT("Camera");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_145_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraModifier_CameraShake(UCameraModifier_CameraShake&&); \
	UCameraModifier_CameraShake(const UCameraModifier_CameraShake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCameraModifier_CameraShake); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraModifier_CameraShake); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraModifier_CameraShake) \
	ENGINE_API virtual ~UCameraModifier_CameraShake();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_142_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_145_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_145_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_145_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraModifier_CameraShake>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
