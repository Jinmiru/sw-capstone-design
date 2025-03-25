// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MediaSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_MediaSource_generated_h
#error "MediaSource.generated.h already included, missing '#pragma once' in MediaSource.h"
#endif
#define MEDIAASSETS_MediaSource_generated_h

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMediaSourceCacheSettings_Statics; \
	MEDIAASSETS_API static class UScriptStruct* StaticStruct();


template<> MEDIAASSETS_API UScriptStruct* StaticStruct<struct FMediaSourceCacheSettings>();

#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetMediaOptionString); \
	DECLARE_FUNCTION(execSetMediaOptionInt64); \
	DECLARE_FUNCTION(execSetMediaOptionFloat); \
	DECLARE_FUNCTION(execSetMediaOptionBool); \
	DECLARE_FUNCTION(execValidate); \
	DECLARE_FUNCTION(execGetUrl);


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMediaSource(); \
	friend struct Z_Construct_UClass_UMediaSource_Statics; \
public: \
	DECLARE_CLASS(UMediaSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaAssets"), MEDIAASSETS_API) \
	DECLARE_SERIALIZER(UMediaSource)


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMediaSource(UMediaSource&&); \
	UMediaSource(const UMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMediaSource); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMediaSource) \
	MEDIAASSETS_API virtual ~UMediaSource();


#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_74_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_79_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_MediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
