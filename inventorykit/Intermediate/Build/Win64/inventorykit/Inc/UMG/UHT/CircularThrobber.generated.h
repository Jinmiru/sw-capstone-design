// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/CircularThrobber.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_CircularThrobber_generated_h
#error "CircularThrobber.generated.h already included, missing '#pragma once' in CircularThrobber.h"
#endif
#define UMG_CircularThrobber_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetRadius); \
	DECLARE_FUNCTION(execSetPeriod); \
	DECLARE_FUNCTION(execSetNumberOfPieces);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_ACCESSORS \
static void GetNumberOfPieces_WrapperImpl(const void* Object, void* OutValue); \
static void SetNumberOfPieces_WrapperImpl(void* Object, const void* InValue); \
static void GetPeriod_WrapperImpl(const void* Object, void* OutValue); \
static void SetPeriod_WrapperImpl(void* Object, const void* InValue); \
static void GetRadius_WrapperImpl(const void* Object, void* OutValue); \
static void SetRadius_WrapperImpl(void* Object, const void* InValue); \
static void GetImage_WrapperImpl(const void* Object, void* OutValue); \
static void SetImage_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUCircularThrobber(); \
	friend struct Z_Construct_UClass_UCircularThrobber_Statics; \
public: \
	DECLARE_CLASS(UCircularThrobber, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UCircularThrobber)


#define FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UCircularThrobber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCircularThrobber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UCircularThrobber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCircularThrobber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCircularThrobber(UCircularThrobber&&); \
	UCircularThrobber(const UCircularThrobber&); \
public: \
	UMG_API virtual ~UCircularThrobber();


#define FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_21_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UCircularThrobber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_CircularThrobber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
