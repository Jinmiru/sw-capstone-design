// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SourceEffects/SourceEffectFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectFilterSettings;
#ifdef SYNTHESIS_SourceEffectFilter_generated_h
#error "SourceEffectFilter.generated.h already included, missing '#pragma once' in SourceEffectFilter.h"
#endif
#define SYNTHESIS_SourceEffectFilter_generated_h

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceEffectFilterAudioBusModulationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSourceEffectFilterAudioBusModulationSettings>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSourceEffectFilterSettings>();

#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSettings);


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectFilterPreset(); \
	friend struct Z_Construct_UClass_USourceEffectFilterPreset_Statics; \
public: \
	DECLARE_CLASS(USourceEffectFilterPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USourceEffectFilterPreset)


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_173_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceEffectFilterPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USourceEffectFilterPreset(USourceEffectFilterPreset&&); \
	USourceEffectFilterPreset(const USourceEffectFilterPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceEffectFilterPreset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectFilterPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectFilterPreset) \
	NO_API virtual ~USourceEffectFilterPreset();


#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_170_PROLOG
#define FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_173_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USourceEffectFilterPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h


#define FOREACH_ENUM_ESOURCEEFFECTFILTERCIRCUIT(op) \
	op(ESourceEffectFilterCircuit::OnePole) \
	op(ESourceEffectFilterCircuit::StateVariable) \
	op(ESourceEffectFilterCircuit::Ladder) \
	op(ESourceEffectFilterCircuit::Count) 

enum class ESourceEffectFilterCircuit : uint8;
template<> struct TIsUEnumClass<ESourceEffectFilterCircuit> { enum { Value = true }; };
template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectFilterCircuit>();

#define FOREACH_ENUM_ESOURCEEFFECTFILTERTYPE(op) \
	op(ESourceEffectFilterType::LowPass) \
	op(ESourceEffectFilterType::HighPass) \
	op(ESourceEffectFilterType::BandPass) \
	op(ESourceEffectFilterType::BandStop) \
	op(ESourceEffectFilterType::Count) 

enum class ESourceEffectFilterType : uint8;
template<> struct TIsUEnumClass<ESourceEffectFilterType> { enum { Value = true }; };
template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectFilterType>();

#define FOREACH_ENUM_ESOURCEEFFECTFILTERPARAM(op) \
	op(ESourceEffectFilterParam::FilterFrequency) \
	op(ESourceEffectFilterParam::FilterResonance) \
	op(ESourceEffectFilterParam::Count) 

enum class ESourceEffectFilterParam : uint8;
template<> struct TIsUEnumClass<ESourceEffectFilterParam> { enum { Value = true }; };
template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectFilterParam>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
