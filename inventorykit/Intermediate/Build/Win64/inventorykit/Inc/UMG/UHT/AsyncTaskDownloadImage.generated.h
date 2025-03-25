// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprint/AsyncTaskDownloadImage.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAsyncTaskDownloadImage;
class UTexture2DDynamic;
#ifdef UMG_AsyncTaskDownloadImage_generated_h
#error "AsyncTaskDownloadImage.generated.h already included, missing '#pragma once' in AsyncTaskDownloadImage.h"
#endif
#define UMG_AsyncTaskDownloadImage_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_14_DELEGATE \
UMG_API void FDownloadImageDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadImageDelegate, UTexture2DDynamic* Texture);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execDownloadImage);


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncTaskDownloadImage(); \
	friend struct Z_Construct_UClass_UAsyncTaskDownloadImage_Statics; \
public: \
	DECLARE_CLASS(UAsyncTaskDownloadImage, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UAsyncTaskDownloadImage)


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UAsyncTaskDownloadImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncTaskDownloadImage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UAsyncTaskDownloadImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncTaskDownloadImage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAsyncTaskDownloadImage(UAsyncTaskDownloadImage&&); \
	UAsyncTaskDownloadImage(const UAsyncTaskDownloadImage&); \
public: \
	UMG_API virtual ~UAsyncTaskDownloadImage();


#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_16_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UAsyncTaskDownloadImage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Blueprint_AsyncTaskDownloadImage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
