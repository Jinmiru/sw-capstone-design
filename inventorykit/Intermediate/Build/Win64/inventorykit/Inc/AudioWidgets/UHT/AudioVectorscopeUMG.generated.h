// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioVectorscopeUMG.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOWIDGETS_AudioVectorscopeUMG_generated_h
#error "AudioVectorscopeUMG.generated.h already included, missing '#pragma once' in AudioVectorscopeUMG.h"
#endif
#define AUDIOWIDGETS_AudioVectorscopeUMG_generated_h

#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_28_DELEGATE \
static TArray<float> FGetVectorscopeAudioSamples_DelegateWrapper(const FScriptDelegate& GetVectorscopeAudioSamples);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_25_RPC_WRAPPERS \
	DECLARE_FUNCTION(execStopProcessing); \
	DECLARE_FUNCTION(execStartProcessing);


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAudioVectorscope(); \
	friend struct Z_Construct_UClass_UAudioVectorscope_Statics; \
public: \
	DECLARE_CLASS(UAudioVectorscope, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioWidgets"), NO_API) \
	DECLARE_SERIALIZER(UAudioVectorscope)


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioVectorscope(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioVectorscope) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioVectorscope); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioVectorscope); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioVectorscope(UAudioVectorscope&&); \
	UAudioVectorscope(const UAudioVectorscope&); \
public: \
	NO_API virtual ~UAudioVectorscope();


#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_25_RPC_WRAPPERS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_25_INCLASS \
	FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOWIDGETS_API UClass* StaticClass<class UAudioVectorscope>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_AudioWidgets_Source_AudioWidgets_Public_AudioVectorscopeUMG_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
