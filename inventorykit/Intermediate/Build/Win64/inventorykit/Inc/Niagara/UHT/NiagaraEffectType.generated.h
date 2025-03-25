// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NiagaraEffectType.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraEffectType_generated_h
#error "NiagaraEffectType.generated.h already included, missing '#pragma once' in NiagaraEffectType.h"
#endif
#define NIAGARA_NiagaraEffectType_generated_h

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraLinearRamp_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraLinearRamp>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraGlobalBudgetScaling_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraGlobalBudgetScaling>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemVisibilityCullingSettings_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemVisibilityCullingSettings>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettings_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemScalabilitySettings>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_263_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilitySettingsArray_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemScalabilitySettingsArray>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_272_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraSystemScalabilityOverride_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraSystemScalabilitySettings Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraSystemScalabilityOverride>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_300_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettings_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterScalabilitySettings>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_322_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilitySettingsArray_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterScalabilitySettingsArray>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_331_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverride_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct(); \
	typedef FNiagaraEmitterScalabilitySettings Super;


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterScalabilityOverride>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_344_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraEmitterScalabilityOverrides_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraEmitterScalabilityOverrides>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_365_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSignificanceHandler(); \
	friend struct Z_Construct_UClass_UNiagaraSignificanceHandler_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSignificanceHandler, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraSignificanceHandler)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_365_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSignificanceHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSignificanceHandler(UNiagaraSignificanceHandler&&); \
	UNiagaraSignificanceHandler(const UNiagaraSignificanceHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSignificanceHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSignificanceHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSignificanceHandler) \
	NIAGARA_API virtual ~UNiagaraSignificanceHandler();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_362_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_365_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_365_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_365_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSignificanceHandler>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_375_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSignificanceHandlerDistance(); \
	friend struct Z_Construct_UClass_UNiagaraSignificanceHandlerDistance_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSignificanceHandlerDistance, UNiagaraSignificanceHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraSignificanceHandlerDistance)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_375_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSignificanceHandlerDistance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSignificanceHandlerDistance(UNiagaraSignificanceHandlerDistance&&); \
	UNiagaraSignificanceHandlerDistance(const UNiagaraSignificanceHandlerDistance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSignificanceHandlerDistance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSignificanceHandlerDistance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSignificanceHandlerDistance) \
	NIAGARA_API virtual ~UNiagaraSignificanceHandlerDistance();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_372_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_375_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_375_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_375_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSignificanceHandlerDistance>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_385_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraSignificanceHandlerAge(); \
	friend struct Z_Construct_UClass_UNiagaraSignificanceHandlerAge_Statics; \
public: \
	DECLARE_CLASS(UNiagaraSignificanceHandlerAge, UNiagaraSignificanceHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraSignificanceHandlerAge)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_385_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraSignificanceHandlerAge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraSignificanceHandlerAge(UNiagaraSignificanceHandlerAge&&); \
	UNiagaraSignificanceHandlerAge(const UNiagaraSignificanceHandlerAge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraSignificanceHandlerAge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraSignificanceHandlerAge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraSignificanceHandlerAge) \
	NIAGARA_API virtual ~UNiagaraSignificanceHandlerAge();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_382_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_385_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_385_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_385_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraSignificanceHandlerAge>();

#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_397_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraEffectType, NIAGARA_API)


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_397_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraEffectType(); \
	friend struct Z_Construct_UClass_UNiagaraEffectType_Statics; \
public: \
	DECLARE_CLASS(UNiagaraEffectType, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NIAGARA_API) \
	DECLARE_SERIALIZER(UNiagaraEffectType) \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_397_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Niagara");} \



#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_397_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NIAGARA_API UNiagaraEffectType(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraEffectType) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NIAGARA_API, UNiagaraEffectType); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraEffectType); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNiagaraEffectType(UNiagaraEffectType&&); \
	UNiagaraEffectType(const UNiagaraEffectType&); \
public: \
	NIAGARA_API virtual ~UNiagaraEffectType();


#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_394_PROLOG
#define FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_397_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_397_INCLASS \
	FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h_397_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraEffectType>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraEffectType_h


#define FOREACH_ENUM_ENIAGARACULLREACTION(op) \
	op(ENiagaraCullReaction::Deactivate) \
	op(ENiagaraCullReaction::DeactivateImmediate) \
	op(ENiagaraCullReaction::DeactivateResume) \
	op(ENiagaraCullReaction::DeactivateImmediateResume) \
	op(ENiagaraCullReaction::PauseResume) 

enum class ENiagaraCullReaction;
template<> struct TIsUEnumClass<ENiagaraCullReaction> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCullReaction>();

#define FOREACH_ENUM_ENIAGARASCALABILITYUPDATEFREQUENCY(op) \
	op(ENiagaraScalabilityUpdateFrequency::SpawnOnly) \
	op(ENiagaraScalabilityUpdateFrequency::Low) \
	op(ENiagaraScalabilityUpdateFrequency::Medium) \
	op(ENiagaraScalabilityUpdateFrequency::High) \
	op(ENiagaraScalabilityUpdateFrequency::Continuous) 

enum class ENiagaraScalabilityUpdateFrequency;
template<> struct TIsUEnumClass<ENiagaraScalabilityUpdateFrequency> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScalabilityUpdateFrequency>();

#define FOREACH_ENUM_ENIAGARACULLPROXYMODE(op) \
	op(ENiagaraCullProxyMode::None) \
	op(ENiagaraCullProxyMode::Instanced_Rendered) 

enum class ENiagaraCullProxyMode : uint32;
template<> struct TIsUEnumClass<ENiagaraCullProxyMode> { enum { Value = true }; };
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCullProxyMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
