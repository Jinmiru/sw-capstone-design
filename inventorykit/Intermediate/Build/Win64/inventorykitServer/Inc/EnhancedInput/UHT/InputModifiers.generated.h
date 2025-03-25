// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputModifiers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnhancedPlayerInput;
struct FInputActionValue;
struct FLinearColor;
#ifdef ENHANCEDINPUT_InputModifiers_generated_h
#error "InputModifiers.generated.h already included, missing '#pragma once' in InputModifiers.h"
#endif
#define ENHANCEDINPUT_InputModifiers_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetVisualizationColor); \
	DECLARE_FUNCTION(execModifyRaw);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_CALLBACK_WRAPPERS
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifier(); \
	friend struct Z_Construct_UClass_UInputModifier_Statics; \
public: \
	DECLARE_CLASS(UInputModifier, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UInputModifier) \
	static const TCHAR* StaticConfigName() {return TEXT("Input");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputModifier(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifier(UInputModifier&&); \
	UInputModifier(const UInputModifier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputModifier); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifier); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifier) \
	NO_API virtual ~UInputModifier();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_13_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifier>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSmoothDelta(); \
	friend struct Z_Construct_UClass_UInputModifierSmoothDelta_Statics; \
public: \
	DECLARE_CLASS(UInputModifierSmoothDelta, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierSmoothDelta)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSmoothDelta(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifierSmoothDelta(UInputModifierSmoothDelta&&); \
	UInputModifierSmoothDelta(const UInputModifierSmoothDelta&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSmoothDelta); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSmoothDelta); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSmoothDelta) \
	ENHANCEDINPUT_API virtual ~UInputModifierSmoothDelta();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_83_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_86_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierSmoothDelta>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_130_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierDeadZone(); \
	friend struct Z_Construct_UClass_UInputModifierDeadZone_Statics; \
public: \
	DECLARE_CLASS(UInputModifierDeadZone, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierDeadZone)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_130_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierDeadZone(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifierDeadZone(UInputModifierDeadZone&&); \
	UInputModifierDeadZone(const UInputModifierDeadZone&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierDeadZone); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierDeadZone); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierDeadZone) \
	ENHANCEDINPUT_API virtual ~UInputModifierDeadZone();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_127_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_130_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_130_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_130_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierDeadZone>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierScalar(); \
	friend struct Z_Construct_UClass_UInputModifierScalar_Statics; \
public: \
	DECLARE_CLASS(UInputModifierScalar, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierScalar)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_159_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierScalar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifierScalar(UInputModifierScalar&&); \
	UInputModifierScalar(const UInputModifierScalar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierScalar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierScalar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierScalar) \
	ENHANCEDINPUT_API virtual ~UInputModifierScalar();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_156_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierScalar>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_187_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierScaleByDeltaTime(); \
	friend struct Z_Construct_UClass_UInputModifierScaleByDeltaTime_Statics; \
public: \
	DECLARE_CLASS(UInputModifierScaleByDeltaTime, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierScaleByDeltaTime)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_187_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierScaleByDeltaTime(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifierScaleByDeltaTime(UInputModifierScaleByDeltaTime&&); \
	UInputModifierScaleByDeltaTime(const UInputModifierScaleByDeltaTime&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierScaleByDeltaTime); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierScaleByDeltaTime); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierScaleByDeltaTime) \
	ENHANCEDINPUT_API virtual ~UInputModifierScaleByDeltaTime();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_184_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_187_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_187_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_187_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierScaleByDeltaTime>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierNegate(); \
	friend struct Z_Construct_UClass_UInputModifierNegate_Statics; \
public: \
	DECLARE_CLASS(UInputModifierNegate, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierNegate)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_199_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierNegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifierNegate(UInputModifierNegate&&); \
	UInputModifierNegate(const UInputModifierNegate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierNegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierNegate); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierNegate) \
	ENHANCEDINPUT_API virtual ~UInputModifierNegate();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_196_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_199_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierNegate>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_221_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSmooth(); \
	friend struct Z_Construct_UClass_UInputModifierSmooth_Statics; \
public: \
	DECLARE_CLASS(UInputModifierSmooth, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierSmooth)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_221_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSmooth(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifierSmooth(UInputModifierSmooth&&); \
	UInputModifierSmooth(const UInputModifierSmooth&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSmooth); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSmooth); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSmooth) \
	ENHANCEDINPUT_API virtual ~UInputModifierSmooth();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_218_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_221_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_221_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_221_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierSmooth>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_251_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveExponential(); \
	friend struct Z_Construct_UClass_UInputModifierResponseCurveExponential_Statics; \
public: \
	DECLARE_CLASS(UInputModifierResponseCurveExponential, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveExponential)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_251_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveExponential(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifierResponseCurveExponential(UInputModifierResponseCurveExponential&&); \
	UInputModifierResponseCurveExponential(const UInputModifierResponseCurveExponential&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveExponential); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveExponential); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveExponential) \
	ENHANCEDINPUT_API virtual ~UInputModifierResponseCurveExponential();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_248_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_251_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_251_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_251_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierResponseCurveExponential>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_270_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierResponseCurveUser(); \
	friend struct Z_Construct_UClass_UInputModifierResponseCurveUser_Statics; \
public: \
	DECLARE_CLASS(UInputModifierResponseCurveUser, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierResponseCurveUser)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_270_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierResponseCurveUser(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifierResponseCurveUser(UInputModifierResponseCurveUser&&); \
	UInputModifierResponseCurveUser(const UInputModifierResponseCurveUser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierResponseCurveUser); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierResponseCurveUser); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierResponseCurveUser) \
	ENHANCEDINPUT_API virtual ~UInputModifierResponseCurveUser();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_267_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_270_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_270_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_270_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierResponseCurveUser>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_301_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierFOVScaling(); \
	friend struct Z_Construct_UClass_UInputModifierFOVScaling_Statics; \
public: \
	DECLARE_CLASS(UInputModifierFOVScaling, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierFOVScaling)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_301_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierFOVScaling(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifierFOVScaling(UInputModifierFOVScaling&&); \
	UInputModifierFOVScaling(const UInputModifierFOVScaling&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierFOVScaling); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierFOVScaling); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierFOVScaling) \
	ENHANCEDINPUT_API virtual ~UInputModifierFOVScaling();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_298_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_301_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_301_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_301_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierFOVScaling>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_324_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierToWorldSpace(); \
	friend struct Z_Construct_UClass_UInputModifierToWorldSpace_Statics; \
public: \
	DECLARE_CLASS(UInputModifierToWorldSpace, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierToWorldSpace)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_324_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierToWorldSpace(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifierToWorldSpace(UInputModifierToWorldSpace&&); \
	UInputModifierToWorldSpace(const UInputModifierToWorldSpace&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierToWorldSpace); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierToWorldSpace); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierToWorldSpace) \
	ENHANCEDINPUT_API virtual ~UInputModifierToWorldSpace();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_321_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_324_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_324_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_324_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierToWorldSpace>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_357_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSwizzleAxis(); \
	friend struct Z_Construct_UClass_UInputModifierSwizzleAxis_Statics; \
public: \
	DECLARE_CLASS(UInputModifierSwizzleAxis, UInputModifier, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/EnhancedInput"), ENHANCEDINPUT_API) \
	DECLARE_SERIALIZER(UInputModifierSwizzleAxis)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_357_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENHANCEDINPUT_API UInputModifierSwizzleAxis(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInputModifierSwizzleAxis(UInputModifierSwizzleAxis&&); \
	UInputModifierSwizzleAxis(const UInputModifierSwizzleAxis&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENHANCEDINPUT_API, UInputModifierSwizzleAxis); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSwizzleAxis); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSwizzleAxis) \
	ENHANCEDINPUT_API virtual ~UInputModifierSwizzleAxis();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_354_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_357_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_357_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h_357_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UInputModifierSwizzleAxis>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_InputModifiers_h


#define FOREACH_ENUM_ENORMALIZEINPUTSMOOTHINGTYPE(op) \
	op(ENormalizeInputSmoothingType::None) \
	op(ENormalizeInputSmoothingType::Lerp) \
	op(ENormalizeInputSmoothingType::Interp_To) \
	op(ENormalizeInputSmoothingType::Interp_Constant_To) \
	op(ENormalizeInputSmoothingType::Interp_Circular_In) \
	op(ENormalizeInputSmoothingType::Interp_Circular_Out) \
	op(ENormalizeInputSmoothingType::Interp_Circular_In_Out) \
	op(ENormalizeInputSmoothingType::Interp_Ease_In) \
	op(ENormalizeInputSmoothingType::Interp_Ease_Out) \
	op(ENormalizeInputSmoothingType::Interp_Ease_In_Out) \
	op(ENormalizeInputSmoothingType::Interp_Expo_In) \
	op(ENormalizeInputSmoothingType::Interp_Expo_Out) \
	op(ENormalizeInputSmoothingType::Interp_Expo_In_Out) \
	op(ENormalizeInputSmoothingType::Interp_Sin_In) \
	op(ENormalizeInputSmoothingType::Interp_Sin_Out) \
	op(ENormalizeInputSmoothingType::Interp_Sin_In_Out) 

enum class ENormalizeInputSmoothingType : uint8;
template<> struct TIsUEnumClass<ENormalizeInputSmoothingType> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<ENormalizeInputSmoothingType>();

#define FOREACH_ENUM_EDEADZONETYPE(op) \
	op(EDeadZoneType::Axial) \
	op(EDeadZoneType::Radial) 

enum class EDeadZoneType : uint8;
template<> struct TIsUEnumClass<EDeadZoneType> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EDeadZoneType>();

#define FOREACH_ENUM_EFOVSCALINGTYPE(op) \
	op(EFOVScalingType::Standard) \
	op(EFOVScalingType::UE4_BackCompat) 

enum class EFOVScalingType : uint8;
template<> struct TIsUEnumClass<EFOVScalingType> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EFOVScalingType>();

#define FOREACH_ENUM_EINPUTAXISSWIZZLE(op) \
	op(EInputAxisSwizzle::YXZ) \
	op(EInputAxisSwizzle::ZYX) \
	op(EInputAxisSwizzle::XZY) \
	op(EInputAxisSwizzle::YZX) \
	op(EInputAxisSwizzle::ZXY) 

enum class EInputAxisSwizzle : uint8;
template<> struct TIsUEnumClass<EInputAxisSwizzle> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EInputAxisSwizzle>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
