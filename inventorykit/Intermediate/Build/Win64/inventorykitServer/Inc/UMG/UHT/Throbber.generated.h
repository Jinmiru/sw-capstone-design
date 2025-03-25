// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Throbber.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_Throbber_generated_h
#error "Throbber.generated.h already included, missing '#pragma once' in Throbber.h"
#endif
#define UMG_Throbber_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetAnimateOpacity); \
	DECLARE_FUNCTION(execSetAnimateVertically); \
	DECLARE_FUNCTION(execSetAnimateHorizontally); \
	DECLARE_FUNCTION(execSetNumberOfPieces);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_ACCESSORS \
static void GetNumberOfPieces_WrapperImpl(const void* Object, void* OutValue); \
static void SetNumberOfPieces_WrapperImpl(void* Object, const void* InValue); \
static void GetbAnimateHorizontally_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAnimateHorizontally_WrapperImpl(void* Object, const void* InValue); \
static void GetbAnimateVertically_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAnimateVertically_WrapperImpl(void* Object, const void* InValue); \
static void GetbAnimateOpacity_WrapperImpl(const void* Object, void* OutValue); \
static void SetbAnimateOpacity_WrapperImpl(void* Object, const void* InValue); \
static void GetImage_WrapperImpl(const void* Object, void* OutValue); \
static void SetImage_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUThrobber(); \
	friend struct Z_Construct_UClass_UThrobber_Statics; \
public: \
	DECLARE_CLASS(UThrobber, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UThrobber)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UThrobber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThrobber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UThrobber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrobber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UThrobber(UThrobber&&); \
	UThrobber(const UThrobber&); \
public: \
	UMG_API virtual ~UThrobber();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UThrobber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Throbber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
