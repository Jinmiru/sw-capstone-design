// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/CameraShakeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraShakePattern;
#ifdef ENGINE_CameraShakeBase_generated_h
#error "CameraShakeBase.generated.h already included, missing '#pragma once' in CameraShakeBase.h"
#endif
#define ENGINE_CameraShakeBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakePatternStartParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakePatternStartParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakePatternUpdateParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakePatternUpdateParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakePatternScrubParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakePatternScrubParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakePatternUpdateResult_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakePatternUpdateResult>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_175_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakePatternStopParams_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakePatternStopParams>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_215_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeDuration_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeDuration>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraShakeInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCameraShakeInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_449_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetRootShakePattern); \
	DECLARE_FUNCTION(execGetRootShakePattern);


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_449_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakeBase(); \
	friend struct Z_Construct_UClass_UCameraShakeBase_Statics; \
public: \
	DECLARE_CLASS(UCameraShakeBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCameraShakeBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_449_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraShakeBase(UCameraShakeBase&&); \
	UCameraShakeBase(const UCameraShakeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCameraShakeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakeBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakeBase) \
	ENGINE_API virtual ~UCameraShakeBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_446_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_449_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_449_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_449_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_449_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraShakeBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_648_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraShakePattern(); \
	friend struct Z_Construct_UClass_UCameraShakePattern_Statics; \
public: \
	DECLARE_CLASS(UCameraShakePattern, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCameraShakePattern)


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_648_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCameraShakePattern(UCameraShakePattern&&); \
	UCameraShakePattern(const UCameraShakePattern&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCameraShakePattern); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraShakePattern); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraShakePattern) \
	ENGINE_API virtual ~UCameraShakePattern();


#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_645_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_648_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_648_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h_648_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraShakePattern>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeBase_h


#define FOREACH_ENUM_ECAMERASHAKEPATTERNUPDATERESULTFLAGS(op) \
	op(ECameraShakePatternUpdateResultFlags::ApplyAsAbsolute) \
	op(ECameraShakePatternUpdateResultFlags::SkipAutoScale) \
	op(ECameraShakePatternUpdateResultFlags::SkipAutoPlaySpace) \
	op(ECameraShakePatternUpdateResultFlags::Default) 

enum class ECameraShakePatternUpdateResultFlags : uint8;
template<> struct TIsUEnumClass<ECameraShakePatternUpdateResultFlags> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ECameraShakePatternUpdateResultFlags>();

#define FOREACH_ENUM_ECAMERASHAKEDURATIONTYPE(op) \
	op(ECameraShakeDurationType::Fixed) \
	op(ECameraShakeDurationType::Infinite) \
	op(ECameraShakeDurationType::Custom) 

enum class ECameraShakeDurationType : uint8;
template<> struct TIsUEnumClass<ECameraShakeDurationType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ECameraShakeDurationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
