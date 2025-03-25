// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioAnalyzerNRT.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOANALYZER_AudioAnalyzerNRT_generated_h
#error "AudioAnalyzerNRT.generated.h already included, missing '#pragma once' in AudioAnalyzerNRT.h"
#endif
#define AUDIOANALYZER_AudioAnalyzerNRT_generated_h

#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerNRTSettings(); \
	friend struct Z_Construct_UClass_UAudioAnalyzerNRTSettings_Statics; \
public: \
	DECLARE_CLASS(UAudioAnalyzerNRTSettings, UAudioAnalyzerAssetBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), AUDIOANALYZER_API) \
	DECLARE_SERIALIZER(UAudioAnalyzerNRTSettings)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOANALYZER_API UAudioAnalyzerNRTSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioAnalyzerNRTSettings(UAudioAnalyzerNRTSettings&&); \
	UAudioAnalyzerNRTSettings(const UAudioAnalyzerNRTSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOANALYZER_API, UAudioAnalyzerNRTSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerNRTSettings); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzerNRTSettings) \
	AUDIOANALYZER_API virtual ~UAudioAnalyzerNRTSettings();


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_23_PROLOG
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_26_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOANALYZER_API UClass* StaticClass<class UAudioAnalyzerNRTSettings>();

#if WITH_EDITOR
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_65_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execAnalyzeAudio);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_65_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_65_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAudioAnalyzerNRT, AUDIOANALYZER_API)


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioAnalyzerNRT(); \
	friend struct Z_Construct_UClass_UAudioAnalyzerNRT_Statics; \
public: \
	DECLARE_CLASS(UAudioAnalyzerNRT, UAudioAnalyzerAssetBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioAnalyzer"), AUDIOANALYZER_API) \
	DECLARE_SERIALIZER(UAudioAnalyzerNRT) \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_65_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOANALYZER_API UAudioAnalyzerNRT(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioAnalyzerNRT(UAudioAnalyzerNRT&&); \
	UAudioAnalyzerNRT(const UAudioAnalyzerNRT&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOANALYZER_API, UAudioAnalyzerNRT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioAnalyzerNRT); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioAnalyzerNRT) \
	AUDIOANALYZER_API virtual ~UAudioAnalyzerNRT();


#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_62_PROLOG
#define FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_65_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOANALYZER_API UClass* StaticClass<class UAudioAnalyzerNRT>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioAnalyzer_Classes_AudioAnalyzerNRT_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
