// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OnsetNRT.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOSYNESTHESIA_OnsetNRT_generated_h
#error "OnsetNRT.generated.h already included, missing '#pragma once' in OnsetNRT.h"
#endif
#define AUDIOSYNESTHESIA_OnsetNRT_generated_h

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnsetNRTSettings(); \
	friend struct Z_Construct_UClass_UOnsetNRTSettings_Statics; \
public: \
	DECLARE_CLASS(UOnsetNRTSettings, UAudioSynesthesiaNRTSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UOnsetNRTSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnsetNRTSettings(UOnsetNRTSettings&&); \
	UOnsetNRTSettings(const UOnsetNRTSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnsetNRTSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnsetNRTSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnsetNRTSettings) \
	NO_API virtual ~UOnsetNRTSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_12_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class UOnsetNRTSettings>();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNormalizedChannelOnsetsBetweenTimes); \
	DECLARE_FUNCTION(execGetChannelOnsetsBetweenTimes);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnsetNRT(); \
	friend struct Z_Construct_UClass_UOnsetNRT_Statics; \
public: \
	DECLARE_CLASS(UOnsetNRT, UAudioSynesthesiaNRT, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UOnsetNRT)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UOnsetNRT(UOnsetNRT&&); \
	UOnsetNRT(const UOnsetNRT&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnsetNRT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnsetNRT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UOnsetNRT) \
	NO_API virtual ~UOnsetNRT();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_56_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class UOnsetNRT>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_OnsetNRT_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
