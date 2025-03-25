// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeSynchronizableMediaSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_TimeSynchronizableMediaSource_generated_h
#error "TimeSynchronizableMediaSource.generated.h already included, missing '#pragma once' in TimeSynchronizableMediaSource.h"
#endif
#define MEDIAASSETS_TimeSynchronizableMediaSource_generated_h

#define FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeSynchronizableMediaSource(); \
	friend struct Z_Construct_UClass_UTimeSynchronizableMediaSource_Statics; \
public: \
	DECLARE_CLASS(UTimeSynchronizableMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MediaAssets"), MEDIAASSETS_API) \
	DECLARE_SERIALIZER(UTimeSynchronizableMediaSource)


#define FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTimeSynchronizableMediaSource(UTimeSynchronizableMediaSource&&); \
	UTimeSynchronizableMediaSource(const UTimeSynchronizableMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UTimeSynchronizableMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeSynchronizableMediaSource); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UTimeSynchronizableMediaSource) \
	MEDIAASSETS_API virtual ~UTimeSynchronizableMediaSource();


#define FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_29_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UTimeSynchronizableMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_TimeSynchronizableMediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
