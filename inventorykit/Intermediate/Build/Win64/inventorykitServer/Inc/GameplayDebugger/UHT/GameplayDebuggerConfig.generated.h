// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayDebuggerConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYDEBUGGER_GameplayDebuggerConfig_generated_h
#error "GameplayDebuggerConfig.generated.h already included, missing '#pragma once' in GameplayDebuggerConfig.h"
#endif
#define GAMEPLAYDEBUGGER_GameplayDebuggerConfig_generated_h

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerInputConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerInputConfig>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerCategoryConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerCategoryConfig>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_98_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayDebuggerExtensionConfig_Statics; \
	GAMEPLAYDEBUGGER_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYDEBUGGER_API UScriptStruct* StaticStruct<struct FGameplayDebuggerExtensionConfig>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGameplayDebuggerConfig, GAMEPLAYDEBUGGER_API)


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerConfig(); \
	friend struct Z_Construct_UClass_UGameplayDebuggerConfig_Statics; \
public: \
	DECLARE_CLASS(UGameplayDebuggerConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), GAMEPLAYDEBUGGER_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerConfig) \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYDEBUGGER_API UGameplayDebuggerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYDEBUGGER_API, UGameplayDebuggerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayDebuggerConfig(UGameplayDebuggerConfig&&); \
	UGameplayDebuggerConfig(const UGameplayDebuggerConfig&); \
public: \
	GAMEPLAYDEBUGGER_API virtual ~UGameplayDebuggerConfig();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_112_PROLOG
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_INCLASS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<class UGameplayDebuggerConfig>();

#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayDebuggerUserSettings(); \
	friend struct Z_Construct_UClass_UGameplayDebuggerUserSettings_Statics; \
public: \
	DECLARE_CLASS(UGameplayDebuggerUserSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayDebugger"), GAMEPLAYDEBUGGER_API) \
	DECLARE_SERIALIZER(UGameplayDebuggerUserSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYDEBUGGER_API UGameplayDebuggerUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayDebuggerUserSettings(UGameplayDebuggerUserSettings&&); \
	UGameplayDebuggerUserSettings(const UGameplayDebuggerUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYDEBUGGER_API, UGameplayDebuggerUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayDebuggerUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayDebuggerUserSettings) \
	GAMEPLAYDEBUGGER_API virtual ~UGameplayDebuggerUserSettings();


#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_225_PROLOG
#define FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h_228_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYDEBUGGER_API UClass* StaticClass<class UGameplayDebuggerUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayDebugger_Public_GameplayDebuggerConfig_h


#define FOREACH_ENUM_EGAMEPLAYDEBUGGEROVERRIDEMODE(op) \
	op(EGameplayDebuggerOverrideMode::Enable) \
	op(EGameplayDebuggerOverrideMode::Disable) \
	op(EGameplayDebuggerOverrideMode::UseDefault) 

enum class EGameplayDebuggerOverrideMode : uint8;
template<> struct TIsUEnumClass<EGameplayDebuggerOverrideMode> { enum { Value = true }; };
template<> GAMEPLAYDEBUGGER_API UEnum* StaticEnum<EGameplayDebuggerOverrideMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
