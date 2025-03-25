// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/AudioWidgetSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AudioWidgetSubsystem_generated_h
#error "AudioWidgetSubsystem.generated.h already included, missing '#pragma once' in AudioWidgetSubsystem.h"
#endif
#define ENGINE_AudioWidgetSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioWidgetSubsystem(); \
	friend struct Z_Construct_UClass_UAudioWidgetSubsystem_Statics; \
public: \
	DECLARE_CLASS(UAudioWidgetSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAudioWidgetSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAudioWidgetSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioWidgetSubsystem(UAudioWidgetSubsystem&&); \
	UAudioWidgetSubsystem(const UAudioWidgetSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAudioWidgetSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioWidgetSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAudioWidgetSubsystem) \
	ENGINE_API virtual ~UAudioWidgetSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAudioWidgetSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Audio_AudioWidgetSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
