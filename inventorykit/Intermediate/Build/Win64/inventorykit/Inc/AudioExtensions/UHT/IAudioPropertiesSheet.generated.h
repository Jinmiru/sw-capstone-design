// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IAudioPropertiesSheet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEXTENSIONS_IAudioPropertiesSheet_generated_h
#error "IAudioPropertiesSheet.generated.h already included, missing '#pragma once' in IAudioPropertiesSheet.h"
#endif
#define AUDIOEXTENSIONS_IAudioPropertiesSheet_generated_h

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioPropertiesSheet_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioPropertySheetBaseAsset(); \
	friend struct Z_Construct_UClass_UAudioPropertySheetBaseAsset_Statics; \
public: \
	DECLARE_CLASS(UAudioPropertySheetBaseAsset, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UAudioPropertySheetBaseAsset)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioPropertiesSheet_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioPropertySheetBaseAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioPropertySheetBaseAsset(UAudioPropertySheetBaseAsset&&); \
	UAudioPropertySheetBaseAsset(const UAudioPropertySheetBaseAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioPropertySheetBaseAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioPropertySheetBaseAsset); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioPropertySheetBaseAsset) \
	NO_API virtual ~UAudioPropertySheetBaseAsset();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioPropertiesSheet_h_11_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioPropertiesSheet_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioPropertiesSheet_h_14_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioPropertiesSheet_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class UAudioPropertySheetBaseAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_IAudioPropertiesSheet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
