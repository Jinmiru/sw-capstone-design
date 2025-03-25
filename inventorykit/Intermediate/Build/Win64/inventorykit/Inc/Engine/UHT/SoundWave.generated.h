// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundWave.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESoundAssetCompressionType : uint8;
struct FSoundWaveCuePoint;
#ifdef ENGINE_SoundWave_generated_h
#error "SoundWave.generated.h already included, missing '#pragma once' in SoundWave.h"
#endif
#define ENGINE_SoundWave_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamedAudioPlatformData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStreamedAudioPlatformData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_201_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveSpectralData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveSpectralData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_219_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveSpectralDataPerSound_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveSpectralDataPerSound>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_237_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveEnvelopeDataPerSound_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveEnvelopeDataPerSound>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveSpectralDataEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveSpectralDataEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_282_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveSpectralTimeData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveSpectralTimeData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_297_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveEnvelopeTimeData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveEnvelopeTimeData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_386_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundWaveCuePoint_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundWaveCuePoint>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_436_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetLoopRegions); \
	DECLARE_FUNCTION(execGetCuePoints); \
	DECLARE_FUNCTION(execSetSoundAssetCompressionType); \
	DECLARE_FUNCTION(execGetSoundAssetCompressionType);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_436_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundWave, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_436_INCLASS \
private: \
	static void StaticRegisterNativesUSoundWave(); \
	friend struct Z_Construct_UClass_USoundWave_Statics; \
public: \
	DECLARE_CLASS(USoundWave, USoundBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundWave) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_436_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<USoundWave*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_436_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundWave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundWave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundWave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundWave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundWave(USoundWave&&); \
	USoundWave(const USoundWave&); \
public: \
	ENGINE_API virtual ~USoundWave();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_433_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_436_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_436_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_436_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h_436_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundWave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundWave_h


#define FOREACH_ENUM_EDECOMPRESSIONTYPE(op) \
	op(DTYPE_Setup) \
	op(DTYPE_Invalid) \
	op(DTYPE_Preview) \
	op(DTYPE_Native) \
	op(DTYPE_RealTime) \
	op(DTYPE_Procedural) \
	op(DTYPE_Xenon) \
	op(DTYPE_Streaming) 

enum EDecompressionType : int;
template<> ENGINE_API UEnum* StaticEnum<EDecompressionType>();

#define FOREACH_ENUM_ESOUNDWAVEFFTSIZE(op) \
	op(ESoundWaveFFTSize::VerySmall_64) \
	op(ESoundWaveFFTSize::Small_256) \
	op(ESoundWaveFFTSize::Medium_512) \
	op(ESoundWaveFFTSize::Large_1024) \
	op(ESoundWaveFFTSize::VeryLarge_2048) 

enum class ESoundWaveFFTSize : uint8;
template<> struct TIsUEnumClass<ESoundWaveFFTSize> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESoundWaveFFTSize>();

#define FOREACH_ENUM_ESOUNDASSETCOMPRESSIONTYPE(op) \
	op(ESoundAssetCompressionType::BinkAudio) \
	op(ESoundAssetCompressionType::ADPCM) \
	op(ESoundAssetCompressionType::PCM) \
	op(ESoundAssetCompressionType::Opus) \
	op(ESoundAssetCompressionType::PlatformSpecific) \
	op(ESoundAssetCompressionType::ProjectDefined) \
	op(ESoundAssetCompressionType::RADAudio) 

enum class ESoundAssetCompressionType : uint8;
template<> struct TIsUEnumClass<ESoundAssetCompressionType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ESoundAssetCompressionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
