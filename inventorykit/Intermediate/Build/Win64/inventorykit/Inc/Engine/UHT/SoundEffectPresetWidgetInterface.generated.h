// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/SoundEffectPresetWidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundEffectPreset;
#ifdef ENGINE_SoundEffectPresetWidgetInterface_generated_h
#error "SoundEffectPresetWidgetInterface.generated.h already included, missing '#pragma once' in SoundEffectPresetWidgetInterface.h"
#endif
#define ENGINE_SoundEffectPresetWidgetInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundEffectPresetWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundEffectPresetWidgetInterface(USoundEffectPresetWidgetInterface&&); \
	USoundEffectPresetWidgetInterface(const USoundEffectPresetWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundEffectPresetWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundEffectPresetWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundEffectPresetWidgetInterface) \
	ENGINE_API virtual ~USoundEffectPresetWidgetInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSoundEffectPresetWidgetInterface(); \
	friend struct Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(USoundEffectPresetWidgetInterface, UAudioPanelWidgetInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundEffectPresetWidgetInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISoundEffectPresetWidgetInterface() {} \
public: \
	typedef USoundEffectPresetWidgetInterface UClassType; \
	typedef ISoundEffectPresetWidgetInterface ThisClass; \
	ENGINE_API static TSubclassOf<USoundEffectPreset> Execute_GetClass(UObject* O); \
	ENGINE_API static void Execute_OnConstructed(UObject* O, USoundEffectPreset* Preset); \
	ENGINE_API static void Execute_OnPropertyChanged(UObject* O, USoundEffectPreset* Preset, FName PropertyName); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundEffectPresetWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
