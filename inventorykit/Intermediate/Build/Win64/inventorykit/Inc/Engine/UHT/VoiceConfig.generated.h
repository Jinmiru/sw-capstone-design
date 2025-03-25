// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/VoiceConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerState;
class UAudioComponent;
class UVOIPTalker;
#ifdef ENGINE_VoiceConfig_generated_h
#error "VoiceConfig.generated.h already included, missing '#pragma once' in VoiceConfig.h"
#endif
#define ENGINE_VoiceConfig_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVoiceSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FVoiceSettings>();

#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	ENGINE_API virtual void BPOnTalkingEnd_Implementation(); \
	ENGINE_API virtual void BPOnTalkingBegin_Implementation(UAudioComponent* AudioComponent); \
	DECLARE_FUNCTION(execBPOnTalkingEnd); \
	DECLARE_FUNCTION(execBPOnTalkingBegin); \
	DECLARE_FUNCTION(execGetVoiceLevel); \
	DECLARE_FUNCTION(execRegisterWithPlayerState); \
	DECLARE_FUNCTION(execCreateTalkerForPlayer);


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVOIPTalker(); \
	friend struct Z_Construct_UClass_UVOIPTalker_Statics; \
public: \
	DECLARE_CLASS(UVOIPTalker, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVOIPTalker)


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVOIPTalker(UVOIPTalker&&); \
	UVOIPTalker(const UVOIPTalker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVOIPTalker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVOIPTalker); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVOIPTalker)


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVOIPTalker>();

#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMicThreshold);


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVOIPStatics(); \
	friend struct Z_Construct_UClass_UVOIPStatics_Statics; \
public: \
	DECLARE_CLASS(UVOIPStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UVOIPStatics)


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UVOIPStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVOIPStatics(UVOIPStatics&&); \
	UVOIPStatics(const UVOIPStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UVOIPStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVOIPStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVOIPStatics) \
	ENGINE_API virtual ~UVOIPStatics();


#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_143_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UVOIPStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_VoiceConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
