// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundAttenuation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundAttenuation_generated_h
#error "SoundAttenuation.generated.h already included, missing '#pragma once' in SoundAttenuation.h"
#endif
#define ENGINE_SoundAttenuation_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundAttenuationPluginSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FSoundSubmixSendInfoBase Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAttenuationSubmixSendSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FBaseAttenuationSettings Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundAttenuationSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_506_INCLASS \
private: \
	static void StaticRegisterNativesUSoundAttenuation(); \
	friend struct Z_Construct_UClass_USoundAttenuation_Statics; \
public: \
	DECLARE_CLASS(USoundAttenuation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundAttenuation)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_506_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAttenuation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundAttenuation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAttenuation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundAttenuation(USoundAttenuation&&); \
	USoundAttenuation(const USoundAttenuation&); \
public: \
	ENGINE_API virtual ~USoundAttenuation();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_503_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_506_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_506_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_506_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundAttenuation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h


#define FOREACH_ENUM_ESOUNDDISTANCECALC(op) \
	op(SOUNDDISTANCE_Normal) \
	op(SOUNDDISTANCE_InfiniteXYPlane) \
	op(SOUNDDISTANCE_InfiniteXZPlane) \
	op(SOUNDDISTANCE_InfiniteYZPlane) 

enum ESoundDistanceCalc : int;
template<> ENGINE_API UEnum* StaticEnum<ESoundDistanceCalc>();

#define FOREACH_ENUM_ESOUNDSPATIALIZATIONALGORITHM(op) \
	op(SPATIALIZATION_Default) \
	op(SPATIALIZATION_HRTF) 

enum ESoundSpatializationAlgorithm : int;
template<> ENGINE_API UEnum* StaticEnum<ESoundSpatializationAlgorithm>();

#define FOREACH_ENUM_EAIRABSORPTIONMETHOD(op) \
	op(EAirAbsorptionMethod::Linear) \
	op(EAirAbsorptionMethod::CustomCurve) 

enum class EAirAbsorptionMethod : uint8;
template<> struct TIsUEnumClass<EAirAbsorptionMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EAirAbsorptionMethod>();

#define FOREACH_ENUM_EREVERBSENDMETHOD(op) \
	op(EReverbSendMethod::Linear) \
	op(EReverbSendMethod::CustomCurve) \
	op(EReverbSendMethod::Manual) 

enum class EReverbSendMethod : uint8;
template<> struct TIsUEnumClass<EReverbSendMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EReverbSendMethod>();

#define FOREACH_ENUM_EPRIORITYATTENUATIONMETHOD(op) \
	op(EPriorityAttenuationMethod::Linear) \
	op(EPriorityAttenuationMethod::CustomCurve) \
	op(EPriorityAttenuationMethod::Manual) 

enum class EPriorityAttenuationMethod : uint8;
template<> struct TIsUEnumClass<EPriorityAttenuationMethod> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPriorityAttenuationMethod>();

#define FOREACH_ENUM_ENONSPATIALIZEDRADIUSSPEAKERMAPMODE(op) \
	op(ENonSpatializedRadiusSpeakerMapMode::OmniDirectional) \
	op(ENonSpatializedRadiusSpeakerMapMode::Direct2D) \
	op(ENonSpatializedRadiusSpeakerMapMode::Surround2D) 

enum class ENonSpatializedRadiusSpeakerMapMode : uint8;
template<> struct TIsUEnumClass<ENonSpatializedRadiusSpeakerMapMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENonSpatializedRadiusSpeakerMapMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
