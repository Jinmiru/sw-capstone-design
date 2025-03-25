// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/InputDeviceProperties.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputDeviceId;
struct FPlatformUserId;
#ifdef ENGINE_InputDeviceProperties_generated_h
#error "InputDeviceProperties.generated.h already included, missing '#pragma once' in InputDeviceProperties.h"
#endif
#define ENGINE_InputDeviceProperties_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyDeviceProperty); \
	DECLARE_FUNCTION(execResetDeviceProperty); \
	DECLARE_FUNCTION(execEvaluateDeviceProperty);


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceProperty, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInputDeviceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputDeviceProperty(UInputDeviceProperty&&); \
	UInputDeviceProperty(const UInputDeviceProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputDeviceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceProperty); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceProperty) \
	ENGINE_API virtual ~UInputDeviceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_31_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceColorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceColorData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorInputDeviceProperty(); \
	friend struct Z_Construct_UClass_UColorInputDeviceProperty_Statics; \
public: \
	DECLARE_CLASS(UColorInputDeviceProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UColorInputDeviceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorInputDeviceProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UColorInputDeviceProperty(UColorInputDeviceProperty&&); \
	UColorInputDeviceProperty(const UColorInputDeviceProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorInputDeviceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorInputDeviceProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorInputDeviceProperty) \
	NO_API virtual ~UColorInputDeviceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_187_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_190_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UColorInputDeviceProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_220_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceColorCurveData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceColorCurveData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorInputDeviceCurveProperty(); \
	friend struct Z_Construct_UClass_UColorInputDeviceCurveProperty_Statics; \
public: \
	DECLARE_CLASS(UColorInputDeviceCurveProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UColorInputDeviceCurveProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorInputDeviceCurveProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UColorInputDeviceCurveProperty(UColorInputDeviceCurveProperty&&); \
	UColorInputDeviceCurveProperty(const UColorInputDeviceCurveProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorInputDeviceCurveProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorInputDeviceCurveProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorInputDeviceCurveProperty) \
	NO_API virtual ~UColorInputDeviceCurveProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_241_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_244_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UColorInputDeviceCurveProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_275_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceTriggerBaseData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceTriggerBaseData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerEffect(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerEffect_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerEffect, UInputDeviceProperty, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerEffect)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UInputDeviceTriggerEffect(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputDeviceTriggerEffect(UInputDeviceTriggerEffect&&); \
	UInputDeviceTriggerEffect(const UInputDeviceTriggerEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UInputDeviceTriggerEffect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerEffect); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceTriggerEffect) \
	ENGINE_API virtual ~UInputDeviceTriggerEffect();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_287_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_290_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceTriggerEffect>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_313_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceTriggerFeedbackData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceTriggerFeedbackData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerFeedbackProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerFeedbackProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerFeedbackProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerFeedbackProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputDeviceTriggerFeedbackProperty(UInputDeviceTriggerFeedbackProperty&&); \
	UInputDeviceTriggerFeedbackProperty(const UInputDeviceTriggerFeedbackProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerFeedbackProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerFeedbackProperty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputDeviceTriggerFeedbackProperty) \
	NO_API virtual ~UInputDeviceTriggerFeedbackProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_330_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_333_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceTriggerFeedbackProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_366_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceTriggerTriggerResistanceData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceTriggerTriggerResistanceData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerResistanceProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerResistanceProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerResistanceProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerResistanceProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputDeviceTriggerResistanceProperty(UInputDeviceTriggerResistanceProperty&&); \
	UInputDeviceTriggerResistanceProperty(const UInputDeviceTriggerResistanceProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerResistanceProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerResistanceProperty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputDeviceTriggerResistanceProperty) \
	NO_API virtual ~UInputDeviceTriggerResistanceProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_389_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_392_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceTriggerResistanceProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_425_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDeviceTriggerTriggerVibrationData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDeviceTriggerTriggerVibrationData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceTriggerVibrationProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceTriggerVibrationProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceTriggerVibrationProperty, UInputDeviceTriggerEffect, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceTriggerVibrationProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputDeviceTriggerVibrationProperty(UInputDeviceTriggerVibrationProperty&&); \
	UInputDeviceTriggerVibrationProperty(const UInputDeviceTriggerVibrationProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceTriggerVibrationProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceTriggerVibrationProperty); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputDeviceTriggerVibrationProperty) \
	NO_API virtual ~UInputDeviceTriggerVibrationProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_446_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_449_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceTriggerVibrationProperty>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_485_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAudioBasedVibrationData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAudioBasedVibrationData>();

#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputDeviceAudioBasedVibrationProperty(); \
	friend struct Z_Construct_UClass_UInputDeviceAudioBasedVibrationProperty_Statics; \
public: \
	DECLARE_CLASS(UInputDeviceAudioBasedVibrationProperty, UInputDeviceProperty, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UInputDeviceAudioBasedVibrationProperty)


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputDeviceAudioBasedVibrationProperty(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputDeviceAudioBasedVibrationProperty(UInputDeviceAudioBasedVibrationProperty&&); \
	UInputDeviceAudioBasedVibrationProperty(const UInputDeviceAudioBasedVibrationProperty&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputDeviceAudioBasedVibrationProperty); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputDeviceAudioBasedVibrationProperty); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputDeviceAudioBasedVibrationProperty) \
	NO_API virtual ~UInputDeviceAudioBasedVibrationProperty();


#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_499_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h_502_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UInputDeviceAudioBasedVibrationProperty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_GameFramework_InputDeviceProperties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
