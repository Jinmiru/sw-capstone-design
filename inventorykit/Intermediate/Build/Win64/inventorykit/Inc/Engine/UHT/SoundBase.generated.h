// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sound/SoundBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundBase_generated_h
#error "SoundBase.generated.h already included, missing '#pragma once' in SoundBase.h"
#endif
#define ENGINE_SoundBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_91_RPC_WRAPPERS \
	DECLARE_FUNCTION(execIsAttenuationSettingsEditable);


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_91_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(USoundBase, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUSoundBase(); \
	friend struct Z_Construct_UClass_USoundBase_Statics; \
public: \
	DECLARE_CLASS(USoundBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundBase) \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_91_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<USoundBase*>(this); }


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundBase(USoundBase&&); \
	USoundBase(const USoundBase&); \
public: \
	ENGINE_API virtual ~USoundBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_88_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_91_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_91_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Sound_SoundBase_h


#define FOREACH_ENUM_EVIRTUALIZATIONMODE(op) \
	op(EVirtualizationMode::Disabled) \
	op(EVirtualizationMode::PlayWhenSilent) \
	op(EVirtualizationMode::Restart) 

enum class EVirtualizationMode : uint8;
template<> struct TIsUEnumClass<EVirtualizationMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EVirtualizationMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
