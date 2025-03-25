// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/DialogueVoice.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DialogueVoice_generated_h
#error "DialogueVoice.generated.h already included, missing '#pragma once' in DialogueVoice.h"
#endif
#define ENGINE_DialogueVoice_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUDialogueVoice(); \
	friend struct Z_Construct_UClass_UDialogueVoice_Statics; \
public: \
	DECLARE_CLASS(UDialogueVoice, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDialogueVoice)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDialogueVoice(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDialogueVoice) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDialogueVoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDialogueVoice); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDialogueVoice(UDialogueVoice&&); \
	UDialogueVoice(const UDialogueVoice&); \
public: \
	ENGINE_API virtual ~UDialogueVoice();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_20_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDialogueVoice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueVoice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
