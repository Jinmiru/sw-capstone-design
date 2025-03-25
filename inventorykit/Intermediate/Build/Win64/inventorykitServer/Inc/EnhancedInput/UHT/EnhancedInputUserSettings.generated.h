// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UserSettings/EnhancedInputUserSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FKeyMappingRow;
class UEnhancedInputUserSettings;
class UEnhancedPlayerMappableKeyProfile;
class UInputMappingContext;
struct FGameplayTag;
struct FGameplayTagContainer;
struct FKey;
struct FMapPlayerKeyArgs;
struct FPlayerKeyMapping;
struct FPlayerMappableKeyProfileCreationArgs;
struct FPlayerMappableKeyQueryOptions;
#ifdef ENHANCEDINPUT_EnhancedInputUserSettings_generated_h
#error "EnhancedInputUserSettings.generated.h already included, missing '#pragma once' in EnhancedInputUserSettings.h"
#endif
#define ENHANCEDINPUT_EnhancedInputUserSettings_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMapPlayerKeyArgs_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FMapPlayerKeyArgs>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerKeyMapping_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FPlayerKeyMapping>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_230_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FKeyMappingRow_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FKeyMappingRow>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_246_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerMappableKeyQueryOptions_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FPlayerMappableKeyQueryOptions>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_283_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoesMappingPassQueryOptions); \
	DECLARE_FUNCTION(execResetToDefault); \
	DECLARE_FUNCTION(execK2_FindKeyMapping); \
	DECLARE_FUNCTION(execGetMappingNamesForKey); \
	DECLARE_FUNCTION(execQueryPlayerMappedKeys); \
	DECLARE_FUNCTION(execGetMappedKeysInRow); \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execDumpProfileToLog); \
	DECLARE_FUNCTION(execResetMappingToDefault); \
	DECLARE_FUNCTION(execGetPlayerMappingRows); \
	DECLARE_FUNCTION(execGetProfileDisplayName); \
	DECLARE_FUNCTION(execGetProfileIdentifer); \
	DECLARE_FUNCTION(execSetDisplayName);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_283_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEnhancedPlayerMappableKeyProfile, NO_API)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_283_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedPlayerMappableKeyProfile(); \
	friend struct Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics; \
public: \
	DECLARE_CLASS(UEnhancedPlayerMappableKeyProfile, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedPlayerMappableKeyProfile) \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_283_ARCHIVESERIALIZER


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_283_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedPlayerMappableKeyProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnhancedPlayerMappableKeyProfile(UEnhancedPlayerMappableKeyProfile&&); \
	UEnhancedPlayerMappableKeyProfile(const UEnhancedPlayerMappableKeyProfile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedPlayerMappableKeyProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedPlayerMappableKeyProfile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedPlayerMappableKeyProfile) \
	NO_API virtual ~UEnhancedPlayerMappableKeyProfile();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_280_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_283_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_283_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_283_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_283_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UEnhancedPlayerMappableKeyProfile>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_433_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerMappableKeyProfileCreationArgs_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENHANCEDINPUT_API UScriptStruct* StaticStruct<struct FPlayerMappableKeyProfileCreationArgs>();

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_550_DELEGATE \
static void FEnhancedInputUserSettingsChanged_DelegateWrapper(const FMulticastScriptDelegate& EnhancedInputUserSettingsChanged, UEnhancedInputUserSettings* Settings);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_555_DELEGATE \
static void FEnhancedInputUserSettingsApplied_DelegateWrapper(const FMulticastScriptDelegate& EnhancedInputUserSettingsApplied);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_605_DELEGATE \
static void FMappableKeyProfileChanged_DelegateWrapper(const FMulticastScriptDelegate& MappableKeyProfileChanged, const UEnhancedPlayerMappableKeyProfile* NewProfile);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_655_DELEGATE \
static void FMappingContextRegisteredWithSettings_DelegateWrapper(const FMulticastScriptDelegate& MappingContextRegisteredWithSettings, const UInputMappingContext* IMC);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_473_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsMappingContextRegistered); \
	DECLARE_FUNCTION(execUnregisterInputMappingContexts); \
	DECLARE_FUNCTION(execUnregisterInputMappingContext); \
	DECLARE_FUNCTION(execRegisterInputMappingContexts); \
	DECLARE_FUNCTION(execRegisterInputMappingContext); \
	DECLARE_FUNCTION(execGetKeyProfileWithIdentifier); \
	DECLARE_FUNCTION(execCreateNewKeyProfile); \
	DECLARE_FUNCTION(execGetCurrentKeyProfile); \
	DECLARE_FUNCTION(execGetCurrentKeyProfileIdentifier); \
	DECLARE_FUNCTION(execSetKeyProfile); \
	DECLARE_FUNCTION(execFindMappingsInRow); \
	DECLARE_FUNCTION(execResetKeyProfileToDefault); \
	DECLARE_FUNCTION(execResetAllPlayerKeysInRow); \
	DECLARE_FUNCTION(execUnMapPlayerKey); \
	DECLARE_FUNCTION(execMapPlayerKey); \
	DECLARE_FUNCTION(execAsyncSaveSettings); \
	DECLARE_FUNCTION(execSaveSettings); \
	DECLARE_FUNCTION(execApplySettings);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_473_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEnhancedInputUserSettings, NO_API)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_473_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnhancedInputUserSettings(); \
	friend struct Z_Construct_UClass_UEnhancedInputUserSettings_Statics; \
public: \
	DECLARE_CLASS(UEnhancedInputUserSettings, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UEnhancedInputUserSettings) \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_473_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("GameUserSettings");} \



#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_473_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnhancedInputUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEnhancedInputUserSettings(UEnhancedInputUserSettings&&); \
	UEnhancedInputUserSettings(const UEnhancedInputUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnhancedInputUserSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnhancedInputUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnhancedInputUserSettings) \
	NO_API virtual ~UEnhancedInputUserSettings();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_470_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_473_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_473_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_473_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h_473_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UEnhancedInputUserSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_UserSettings_EnhancedInputUserSettings_h


#define FOREACH_ENUM_EPLAYERMAPPABLEKEYSLOT(op) \
	op(EPlayerMappableKeySlot::First) \
	op(EPlayerMappableKeySlot::Second) \
	op(EPlayerMappableKeySlot::Third) \
	op(EPlayerMappableKeySlot::Fourth) \
	op(EPlayerMappableKeySlot::Fifth) \
	op(EPlayerMappableKeySlot::Sixth) \
	op(EPlayerMappableKeySlot::Seventh) \
	op(EPlayerMappableKeySlot::Unspecified) \
	op(EPlayerMappableKeySlot::Max) 

enum class EPlayerMappableKeySlot : uint8;
template<> struct TIsUEnumClass<EPlayerMappableKeySlot> { enum { Value = true }; };
template<> ENHANCEDINPUT_API UEnum* StaticEnum<EPlayerMappableKeySlot>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
