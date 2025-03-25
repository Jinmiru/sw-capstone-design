// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LoudnessNRT.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOSYNESTHESIA_LoudnessNRT_generated_h
#error "LoudnessNRT.generated.h already included, missing '#pragma once' in LoudnessNRT.h"
#endif
#define AUDIOSYNESTHESIA_LoudnessNRT_generated_h

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoudnessNRTSettings(); \
	friend struct Z_Construct_UClass_ULoudnessNRTSettings_Statics; \
public: \
	DECLARE_CLASS(ULoudnessNRTSettings, UAudioSynesthesiaNRTSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(ULoudnessNRTSettings)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULoudnessNRTSettings(ULoudnessNRTSettings&&); \
	ULoudnessNRTSettings(const ULoudnessNRTSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoudnessNRTSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudnessNRTSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoudnessNRTSettings) \
	NO_API virtual ~ULoudnessNRTSettings();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_31_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_34_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class ULoudnessNRTSettings>();

#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNormalizedChannelLoudnessAtTime); \
	DECLARE_FUNCTION(execGetNormalizedLoudnessAtTime); \
	DECLARE_FUNCTION(execGetChannelLoudnessAtTime); \
	DECLARE_FUNCTION(execGetLoudnessAtTime);


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoudnessNRT(); \
	friend struct Z_Construct_UClass_ULoudnessNRT_Statics; \
public: \
	DECLARE_CLASS(ULoudnessNRT, UAudioSynesthesiaNRT, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioSynesthesia"), NO_API) \
	DECLARE_SERIALIZER(ULoudnessNRT)


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULoudnessNRT(ULoudnessNRT&&); \
	ULoudnessNRT(const ULoudnessNRT&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoudnessNRT); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudnessNRT); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoudnessNRT) \
	NO_API virtual ~ULoudnessNRT();


#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_77_PROLOG
#define FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_80_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_80_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOSYNESTHESIA_API UClass* StaticClass<class ULoudnessNRT>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioSynesthesia_Source_AudioSynesthesia_Classes_LoudnessNRT_h


#define FOREACH_ENUM_ELOUDNESSNRTCURVETYPEENUM(op) \
	op(ELoudnessNRTCurveTypeEnum::A) \
	op(ELoudnessNRTCurveTypeEnum::B) \
	op(ELoudnessNRTCurveTypeEnum::C) \
	op(ELoudnessNRTCurveTypeEnum::D) \
	op(ELoudnessNRTCurveTypeEnum::None) 

enum class ELoudnessNRTCurveTypeEnum : uint8;
template<> struct TIsUEnumClass<ELoudnessNRTCurveTypeEnum> { enum { Value = true }; };
template<> AUDIOSYNESTHESIA_API UEnum* StaticEnum<ELoudnessNRTCurveTypeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
