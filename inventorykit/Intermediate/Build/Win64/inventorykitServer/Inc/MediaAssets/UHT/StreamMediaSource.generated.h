// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StreamMediaSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MEDIAASSETS_StreamMediaSource_generated_h
#error "StreamMediaSource.generated.h already included, missing '#pragma once' in StreamMediaSource.h"
#endif
#define MEDIAASSETS_StreamMediaSource_generated_h

#define FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStreamMediaSource(); \
	friend struct Z_Construct_UClass_UStreamMediaSource_Statics; \
public: \
	DECLARE_CLASS(UStreamMediaSource, UBaseMediaSource, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MediaAssets"), MEDIAASSETS_API) \
	DECLARE_SERIALIZER(UStreamMediaSource)


#define FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MEDIAASSETS_API UStreamMediaSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStreamMediaSource(UStreamMediaSource&&); \
	UStreamMediaSource(const UStreamMediaSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MEDIAASSETS_API, UStreamMediaSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStreamMediaSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStreamMediaSource) \
	MEDIAASSETS_API virtual ~UStreamMediaSource();


#define FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_15_PROLOG
#define FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MEDIAASSETS_API UClass* StaticClass<class UStreamMediaSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_MediaAssets_Public_StreamMediaSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
