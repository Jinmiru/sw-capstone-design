// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/CoreSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CoreSettings_generated_h
#error "CoreSettings.generated.h already included, missing '#pragma once' in CoreSettings.h"
#endif
#define ENGINE_CoreSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamingSettings(); \
	friend struct Z_Construct_UClass_UStreamingSettings_Statics; \
public: \
	DECLARE_CLASS(UStreamingSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStreamingSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStreamingSettings(UStreamingSettings&&); \
	UStreamingSettings(const UStreamingSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStreamingSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamingSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStreamingSettings) \
	ENGINE_API virtual ~UStreamingSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStreamingSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGarbageCollectionSettings(); \
	friend struct Z_Construct_UClass_UGarbageCollectionSettings_Statics; \
public: \
	DECLARE_CLASS(UGarbageCollectionSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UGarbageCollectionSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_169_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGarbageCollectionSettings(UGarbageCollectionSettings&&); \
	UGarbageCollectionSettings(const UGarbageCollectionSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGarbageCollectionSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGarbageCollectionSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGarbageCollectionSettings) \
	ENGINE_API virtual ~UGarbageCollectionSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_166_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_169_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h_169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGarbageCollectionSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_CoreSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
