// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Visual.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMG_Visual_generated_h
#error "Visual.generated.h already included, missing '#pragma once' in Visual.h"
#endif
#define UMG_Visual_generated_h

#define FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUVisual(); \
	friend struct Z_Construct_UClass_UVisual_Statics; \
public: \
	DECLARE_CLASS(UVisual, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UVisual)


#define FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UVisual(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVisual) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UVisual); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVisual); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVisual(UVisual&&); \
	UVisual(const UVisual&); \
public: \
	UMG_API virtual ~UVisual();


#define FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h_11_PROLOG
#define FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_INCLASS \
	FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UVisual>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_UMG_Public_Components_Visual_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
