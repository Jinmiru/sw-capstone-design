// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Audio/SoundSubmixWidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USoundSubmixBase;
#ifdef ENGINE_SoundSubmixWidgetInterface_generated_h
#error "SoundSubmixWidgetInterface.generated.h already included, missing '#pragma once' in SoundSubmixWidgetInterface.h"
#endif
#define ENGINE_SoundSubmixWidgetInterface_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_16_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundSubmixWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USoundSubmixWidgetInterface(USoundSubmixWidgetInterface&&); \
	USoundSubmixWidgetInterface(const USoundSubmixWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundSubmixWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundSubmixWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundSubmixWidgetInterface) \
	ENGINE_API virtual ~USoundSubmixWidgetInterface();


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSoundSubmixWidgetInterface(); \
	friend struct Z_Construct_UClass_USoundSubmixWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(USoundSubmixWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundSubmixWidgetInterface)


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISoundSubmixWidgetInterface() {} \
public: \
	typedef USoundSubmixWidgetInterface UClassType; \
	typedef ISoundSubmixWidgetInterface ThisClass; \
	ENGINE_API static void Execute_OnConstructed(UObject* O, USoundSubmixBase* SoundSubmix); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_16_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundSubmixWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
