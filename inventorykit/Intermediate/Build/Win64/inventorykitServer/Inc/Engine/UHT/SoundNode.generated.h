// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundNode_generated_h
#error "SoundNode.generated.h already included, missing '#pragma once' in SoundNode.h"
#endif
#define ENGINE_SoundNode_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundNode, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUSoundNode(); \
	friend struct Z_Construct_UClass_USoundNode_Statics; \
public: \
	DECLARE_CLASS(USoundNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundNode) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundNode(USoundNode&&); \
	USoundNode(const USoundNode&); \
public: \
	ENGINE_API virtual ~USoundNode();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_56_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
