// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioPropertiesSheetAssetBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEXTENSIONS_AudioPropertiesSheetAssetBase_generated_h
#error "AudioPropertiesSheetAssetBase.generated.h already included, missing '#pragma once' in AudioPropertiesSheetAssetBase.h"
#endif
#define AUDIOEXTENSIONS_AudioPropertiesSheetAssetBase_generated_h

#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioPropertiesSheetAssetBase(); \
	friend struct Z_Construct_UClass_UAudioPropertiesSheetAssetBase_Statics; \
public: \
	DECLARE_CLASS(UAudioPropertiesSheetAssetBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), NO_API) \
	DECLARE_SERIALIZER(UAudioPropertiesSheetAssetBase)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioPropertiesSheetAssetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioPropertiesSheetAssetBase(UAudioPropertiesSheetAssetBase&&); \
	UAudioPropertiesSheetAssetBase(const UAudioPropertiesSheetAssetBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioPropertiesSheetAssetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioPropertiesSheetAssetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioPropertiesSheetAssetBase) \
	NO_API virtual ~UAudioPropertiesSheetAssetBase();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_12_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class UAudioPropertiesSheetAssetBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_AudioPropertiesSheetAssetBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
