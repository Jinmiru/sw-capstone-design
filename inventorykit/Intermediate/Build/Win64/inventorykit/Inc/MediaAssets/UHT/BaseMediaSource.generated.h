// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseMediaSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_BaseMediaSource_generated_h
#error "BaseMediaSource.generated.h already included, missing '#pragma once' in BaseMediaSource.h"
#endif
#define MEDIAASSETS_BaseMediaSource_generated_h

#define FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_31_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UBaseMediaSource, MEDIAASSETS_API)


#define FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseMediaSource(); \
	friend struct Z_Construct_UClass_UBaseMediaSource_Statics; \
public: \
	DECLARE_CLASS(UBaseMediaSource, UMediaSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaAssets"), MEDIAASSETS_API) \
	DECLARE_SERIALIZER(UBaseMediaSource) \
	FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_31_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UBaseMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseMediaSource(UBaseMediaSource&&); \
	UBaseMediaSource(const UBaseMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UBaseMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMediaSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMediaSource) \
	MEDIAASSETS_API virtual ~UBaseMediaSource();


#define FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_27_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_31_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UBaseMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_BaseMediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
