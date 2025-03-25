// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "IWaveformTransformation.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AUDIOEXTENSIONS_IWaveformTransformation_generated_h
#error "IWaveformTransformation.generated.h already included, missing '#pragma once' in IWaveformTransformation.h"
#endif
#define AUDIOEXTENSIONS_IWaveformTransformation_generated_h

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveformTransformationBase(); \
	friend struct Z_Construct_UClass_UWaveformTransformationBase_Statics; \
public: \
	DECLARE_CLASS(UWaveformTransformationBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AudioExtensions"), AUDIOEXTENSIONS_API) \
	DECLARE_SERIALIZER(UWaveformTransformationBase)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_65_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEXTENSIONS_API UWaveformTransformationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaveformTransformationBase(UWaveformTransformationBase&&); \
	UWaveformTransformationBase(const UWaveformTransformationBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEXTENSIONS_API, UWaveformTransformationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveformTransformationBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveformTransformationBase) \
	AUDIOEXTENSIONS_API virtual ~UWaveformTransformationBase();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_62_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_65_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class UWaveformTransformationBase>();

#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_78_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWaveformTransformationChain(); \
	friend struct Z_Construct_UClass_UWaveformTransformationChain_Statics; \
public: \
	DECLARE_CLASS(UWaveformTransformationChain, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AudioExtensions"), AUDIOEXTENSIONS_API) \
	DECLARE_SERIALIZER(UWaveformTransformationChain)


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_78_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AUDIOEXTENSIONS_API UWaveformTransformationChain(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWaveformTransformationChain(UWaveformTransformationChain&&); \
	UWaveformTransformationChain(const UWaveformTransformationChain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AUDIOEXTENSIONS_API, UWaveformTransformationChain); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWaveformTransformationChain); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWaveformTransformationChain) \
	AUDIOEXTENSIONS_API virtual ~UWaveformTransformationChain();


#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_75_PROLOG
#define FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_78_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_78_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h_78_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUDIOEXTENSIONS_API UClass* StaticClass<class UWaveformTransformationChain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AudioExtensions_Public_IWaveformTransformation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
