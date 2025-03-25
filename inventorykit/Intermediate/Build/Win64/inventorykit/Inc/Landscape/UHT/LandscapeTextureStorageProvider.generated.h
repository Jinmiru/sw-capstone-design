// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeTextureStorageProvider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeTextureStorageProvider_generated_h
#error "LandscapeTextureStorageProvider.generated.h already included, missing '#pragma once' in LandscapeTextureStorageProvider.h"
#endif
#define LANDSCAPE_LandscapeTextureStorageProvider_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeTexture2DMipMap_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeTexture2DMipMap>();

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_95_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeTextureStorageProviderFactory, LANDSCAPE_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_95_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeTextureStorageProviderFactory(); \
	friend struct Z_Construct_UClass_ULandscapeTextureStorageProviderFactory_Statics; \
public: \
	DECLARE_CLASS(ULandscapeTextureStorageProviderFactory, UTextureAllMipDataProviderFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeTextureStorageProviderFactory) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_95_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeTextureStorageProviderFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeTextureStorageProviderFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ULandscapeTextureStorageProviderFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeTextureStorageProviderFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeTextureStorageProviderFactory(ULandscapeTextureStorageProviderFactory&&); \
	ULandscapeTextureStorageProviderFactory(const ULandscapeTextureStorageProviderFactory&); \
public: \
	LANDSCAPE_API virtual ~ULandscapeTextureStorageProviderFactory();


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_92_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_95_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeTextureStorageProviderFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeTextureStorageProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
