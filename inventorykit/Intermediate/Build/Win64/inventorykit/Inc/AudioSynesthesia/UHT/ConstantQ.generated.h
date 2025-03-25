// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstantQ.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConstantQResults;
#ifdef AUDIOSYNESTHESIA_ConstantQ_generated_h
#error "ConstantQ.generated.h already included, missing '#pragma once' in ConstantQ.h"
#endif
#define AUDIOSYNESTHESIA_ConstantQ_generated_h

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstantQSettings(); \
	friend struct Z_Construct_UClass_UConstantQSettings_Statics; \
public: \
	DECLARE_CLASS(UConstantQSettings, UAudioSynesthesiaSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UConstantQSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConstantQSettings(UConstantQSettings&&); \
	UConstantQSettings(const UConstantQSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstantQSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstantQSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstantQSettings) \
	NO_API virtual ~UConstantQSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_14_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class UConstantQSettings>();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstantQResults_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AUDIOSYNESTHESIA_API UScriptStruct* StaticStruct<struct FConstantQResults>();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_92_DELEGATE \
AUDIOSYNESTHESIA_API void FOnConstantQResults_DelegateWrapper(const FMulticastScriptDelegate& OnConstantQResults, int32 ChannelIndex, TArray<FConstantQResults> const& ConstantQResults);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_98_DELEGATE \
AUDIOSYNESTHESIA_API void FOnLatestConstantQResults_DelegateWrapper(const FMulticastScriptDelegate& OnLatestConstantQResults, int32 ChannelIndex, FConstantQResults const& LatestConstantQResults);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNumCenterFrequencies); \
	DECLARE_FUNCTION(execGetCenterFrequencies);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_111_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstantQAnalyzer(); \
	friend struct Z_Construct_UClass_UConstantQAnalyzer_Statics; \
public: \
	DECLARE_CLASS(UConstantQAnalyzer, UAudioAnalyzer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(UConstantQAnalyzer)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_111_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConstantQAnalyzer(UConstantQAnalyzer&&); \
	UConstantQAnalyzer(const UConstantQAnalyzer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstantQAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstantQAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstantQAnalyzer) \
	NO_API virtual ~UConstantQAnalyzer();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_108_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_111_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_111_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_111_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h_111_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class UConstantQAnalyzer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_ConstantQ_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
