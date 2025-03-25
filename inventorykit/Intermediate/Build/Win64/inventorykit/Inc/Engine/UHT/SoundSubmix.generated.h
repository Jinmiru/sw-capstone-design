// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundSubmix.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USoundSubmixBase;
class USoundWave;
enum class EAudioRecordingExportType : uint8;
enum class EAudioSpectrumType : uint8;
enum class EFFTPeakInterpolationMethod : uint8;
enum class EFFTSize : uint8;
enum class EFFTWindowType : uint8;
struct FSoundModulationDestinationSettings;
struct FSoundSubmixSpectralAnalysisBandSettings;
#ifdef ENGINE_SoundSubmix_generated_h
#error "SoundSubmix.generated.h already included, missing '#pragma once' in SoundSubmix.h"
#endif
#define ENGINE_SoundSubmix_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_34_DELEGATE \
ENGINE_API void FOnSubmixRecordedFileDone_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixRecordedFileDone, const USoundWave* ResultingSoundWave);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_39_DELEGATE \
ENGINE_API void FOnSubmixEnvelope_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixEnvelope, TArray<float> const& Envelope);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_41_DELEGATE \
ENGINE_API void FOnSubmixSpectralAnalysis_DelegateWrapper(const FMulticastScriptDelegate& OnSubmixSpectralAnalysis, TArray<float> const& Magnitudes);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDynamicChildSubmix_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDynamicChildSubmix>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_RPC_WRAPPERS \
	DECLARE_FUNCTION(execFindDynamicAncestor); \
	DECLARE_FUNCTION(execDynamicDisconnect); \
	DECLARE_FUNCTION(execDynamicConnect);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixBase(); \
	friend struct Z_Construct_UClass_USoundSubmixBase_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundSubmixBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundSubmixBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundSubmixBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundSubmixBase(USoundSubmixBase&&); \
	USoundSubmixBase(const USoundSubmixBase&); \
public: \
	ENGINE_API virtual ~USoundSubmixBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_172_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_175_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSubmixBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_274_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmixWithParentBase(); \
	friend struct Z_Construct_UClass_USoundSubmixWithParentBase_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixWithParentBase, USoundSubmixBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundSubmixWithParentBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_274_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundSubmixWithParentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixWithParentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundSubmixWithParentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixWithParentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundSubmixWithParentBase(USoundSubmixWithParentBase&&); \
	USoundSubmixWithParentBase(const USoundSubmixWithParentBase&); \
public: \
	ENGINE_API virtual ~USoundSubmixWithParentBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_271_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_274_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_274_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_274_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSubmixWithParentBase>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetDryVolumeModulation); \
	DECLARE_FUNCTION(execSetWetVolumeModulation); \
	DECLARE_FUNCTION(execSetOutputVolumeModulation); \
	DECLARE_FUNCTION(execSetSubmixDryLevel); \
	DECLARE_FUNCTION(execSetSubmixWetLevel); \
	DECLARE_FUNCTION(execSetSubmixOutputVolume); \
	DECLARE_FUNCTION(execStopSpectralAnalysis); \
	DECLARE_FUNCTION(execStartSpectralAnalysis); \
	DECLARE_FUNCTION(execRemoveSpectralAnalysisDelegate); \
	DECLARE_FUNCTION(execAddSpectralAnalysisDelegate); \
	DECLARE_FUNCTION(execAddEnvelopeFollowerDelegate); \
	DECLARE_FUNCTION(execStopEnvelopeFollowing); \
	DECLARE_FUNCTION(execStartEnvelopeFollowing); \
	DECLARE_FUNCTION(execStopRecordingOutput); \
	DECLARE_FUNCTION(execStartRecordingOutput);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundSubmix, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_INCLASS \
private: \
	static void StaticRegisterNativesUSoundSubmix(); \
	friend struct Z_Construct_UClass_USoundSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundSubmix) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundSubmix(USoundSubmix&&); \
	USoundSubmix(const USoundSubmix&); \
public: \
	ENGINE_API virtual ~USoundSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_332_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_335_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSubmix>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_512_INCLASS \
private: \
	static void StaticRegisterNativesUSoundfieldSubmix(); \
	friend struct Z_Construct_UClass_USoundfieldSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundfieldSubmix, USoundSubmixWithParentBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundfieldSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_512_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundfieldSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundfieldSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundfieldSubmix(USoundfieldSubmix&&); \
	USoundfieldSubmix(const USoundfieldSubmix&); \
public: \
	ENGINE_API virtual ~USoundfieldSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_509_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_512_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_512_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_512_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundfieldSubmix>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_559_INCLASS \
private: \
	static void StaticRegisterNativesUEndpointSubmix(); \
	friend struct Z_Construct_UClass_UEndpointSubmix_Statics; \
public: \
	DECLARE_CLASS(UEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEndpointSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_559_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEndpointSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEndpointSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEndpointSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEndpointSubmix(UEndpointSubmix&&); \
	UEndpointSubmix(const UEndpointSubmix&); \
public: \
	ENGINE_API virtual ~UEndpointSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_556_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_559_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_559_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_559_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEndpointSubmix>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_590_INCLASS \
private: \
	static void StaticRegisterNativesUSoundfieldEndpointSubmix(); \
	friend struct Z_Construct_UClass_USoundfieldEndpointSubmix_Statics; \
public: \
	DECLARE_CLASS(USoundfieldEndpointSubmix, USoundSubmixBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundfieldEndpointSubmix)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_590_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundfieldEndpointSubmix(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundfieldEndpointSubmix) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundfieldEndpointSubmix); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundfieldEndpointSubmix); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundfieldEndpointSubmix(USoundfieldEndpointSubmix&&); \
	USoundfieldEndpointSubmix(const USoundfieldEndpointSubmix&); \
public: \
	ENGINE_API virtual ~USoundfieldEndpointSubmix();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_587_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_590_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_590_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h_590_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundfieldEndpointSubmix>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundSubmix_h


#define FOREACH_ENUM_EFFTSIZE(op) \
	op(EFFTSize::DefaultSize) \
	op(EFFTSize::Min) \
	op(EFFTSize::Small) \
	op(EFFTSize::Medium) \
	op(EFFTSize::Large) \
	op(EFFTSize::VeryLarge) \
	op(EFFTSize::Max) 

enum class EFFTSize : uint8;
template<> struct TIsUEnumClass<EFFTSize> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EFFTSize>();

#define FOREACH_ENUM_EFFTPEAKINTERPOLATIONMETHOD(op) \
	op(EFFTPeakInterpolationMethod::NearestNeighbor) \
	op(EFFTPeakInterpolationMethod::Linear) \
	op(EFFTPeakInterpolationMethod::Quadratic) \
	op(EFFTPeakInterpolationMethod::ConstantQ) 

enum class EFFTPeakInterpolationMethod : uint8;
template<> struct TIsUEnumClass<EFFTPeakInterpolationMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EFFTPeakInterpolationMethod>();

#define FOREACH_ENUM_EFFTWINDOWTYPE(op) \
	op(EFFTWindowType::None) \
	op(EFFTWindowType::Hamming) \
	op(EFFTWindowType::Hann) \
	op(EFFTWindowType::Blackman) 

enum class EFFTWindowType : uint8;
template<> struct TIsUEnumClass<EFFTWindowType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EFFTWindowType>();

#define FOREACH_ENUM_EAUDIOSPECTRUMTYPE(op) \
	op(EAudioSpectrumType::MagnitudeSpectrum) \
	op(EAudioSpectrumType::PowerSpectrum) \
	op(EAudioSpectrumType::Decibel) 

enum class EAudioSpectrumType : uint8;
template<> struct TIsUEnumClass<EAudioSpectrumType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAudioSpectrumType>();

#define FOREACH_ENUM_EGAINPARAMMODE(op) \
	op(EGainParamMode::Linear) \
	op(EGainParamMode::Decibels) 

enum class EGainParamMode : uint8;
template<> struct TIsUEnumClass<EGainParamMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EGainParamMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
