// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameplayTagsSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTAGS_GameplayTagsSettings_generated_h
#error "GameplayTagsSettings.generated.h already included, missing '#pragma once' in GameplayTagsSettings.h"
#endif
#define GAMEPLAYTAGS_GameplayTagsSettings_generated_h

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagCategoryRemap_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FGameplayTagCategoryRemap>();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsList(); \
	friend struct Z_Construct_UClass_UGameplayTagsList_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsList, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), GAMEPLAYTAGS_API) \
	DECLARE_SERIALIZER(UGameplayTagsList) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTagsList");} \



#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UGameplayTagsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UGameplayTagsList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayTagsList(UGameplayTagsList&&); \
	UGameplayTagsList(const UGameplayTagsList&); \
public: \
	GAMEPLAYTAGS_API virtual ~UGameplayTagsList();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_33_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_36_INCLASS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UGameplayTagsList>();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_54_INCLASS \
private: \
	static void StaticRegisterNativesURestrictedGameplayTagsList(); \
	friend struct Z_Construct_UClass_URestrictedGameplayTagsList_Statics; \
public: \
	DECLARE_CLASS(URestrictedGameplayTagsList, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), GAMEPLAYTAGS_API) \
	DECLARE_SERIALIZER(URestrictedGameplayTagsList) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_54_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API URestrictedGameplayTagsList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URestrictedGameplayTagsList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, URestrictedGameplayTagsList); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URestrictedGameplayTagsList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URestrictedGameplayTagsList(URestrictedGameplayTagsList&&); \
	URestrictedGameplayTagsList(const URestrictedGameplayTagsList&); \
public: \
	GAMEPLAYTAGS_API virtual ~URestrictedGameplayTagsList();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_51_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_54_INCLASS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_54_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class URestrictedGameplayTagsList>();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRestrictedConfigInfo_Statics; \
	GAMEPLAYTAGS_API static class UScriptStruct* StaticStruct();


template<> GAMEPLAYTAGS_API UScriptStruct* StaticStruct<struct FRestrictedConfigInfo>();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsSettings(); \
	friend struct Z_Construct_UClass_UGameplayTagsSettings_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsSettings, UGameplayTagsList, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), GAMEPLAYTAGS_API) \
	DECLARE_SERIALIZER(UGameplayTagsSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("GameplayTags");} \



#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UGameplayTagsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UGameplayTagsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayTagsSettings(UGameplayTagsSettings&&); \
	UGameplayTagsSettings(const UGameplayTagsSettings&); \
public: \
	GAMEPLAYTAGS_API virtual ~UGameplayTagsSettings();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_98_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_101_INCLASS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UGameplayTagsSettings>();

#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_187_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTagsDeveloperSettings(); \
	friend struct Z_Construct_UClass_UGameplayTagsDeveloperSettings_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagsDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTags"), GAMEPLAYTAGS_API) \
	DECLARE_SERIALIZER(UGameplayTagsDeveloperSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_187_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UGameplayTagsDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagsDeveloperSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UGameplayTagsDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagsDeveloperSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameplayTagsDeveloperSettings(UGameplayTagsDeveloperSettings&&); \
	UGameplayTagsDeveloperSettings(const UGameplayTagsDeveloperSettings&); \
public: \
	GAMEPLAYTAGS_API virtual ~UGameplayTagsDeveloperSettings();


#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_184_PROLOG
#define FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_187_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_187_INCLASS \
	FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h_187_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UGameplayTagsDeveloperSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_GameplayTags_Classes_GameplayTagsSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
