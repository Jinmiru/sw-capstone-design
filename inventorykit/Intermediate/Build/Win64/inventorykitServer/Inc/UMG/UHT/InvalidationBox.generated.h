// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/InvalidationBox.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_InvalidationBox_generated_h
#error "InvalidationBox.generated.h already included, missing '#pragma once' in InvalidationBox.h"
#endif
#define UMG_InvalidationBox_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetCanCache); \
	DECLARE_FUNCTION(execGetCanCache); \
	DECLARE_FUNCTION(execInvalidateCache);


#define FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_ACCESSORS \
static void GetbCanCache_WrapperImpl(const void* Object, void* OutValue); \
static void SetbCanCache_WrapperImpl(void* Object, const void* InValue);


#define FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUInvalidationBox(); \
	friend struct Z_Construct_UClass_UInvalidationBox_Statics; \
public: \
	DECLARE_CLASS(UInvalidationBox, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UInvalidationBox)


#define FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UInvalidationBox(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInvalidationBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UInvalidationBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInvalidationBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInvalidationBox(UInvalidationBox&&); \
	UInvalidationBox(const UInvalidationBox&); \
public: \
	UMG_API virtual ~UInvalidationBox();


#define FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_18_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_ACCESSORS \
	FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UInvalidationBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
