// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionVectorConstant.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DistributionVectorConstant_generated_h
#error "DistributionVectorConstant.generated.h already included, missing '#pragma once' in DistributionVectorConstant.h"
#endif
#define ENGINE_DistributionVectorConstant_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionVectorConstant(); \
	friend struct Z_Construct_UClass_UDistributionVectorConstant_Statics; \
public: \
	DECLARE_CLASS(UDistributionVectorConstant, UDistributionVector, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDistributionVectorConstant)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionVectorConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionVectorConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionVectorConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionVectorConstant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDistributionVectorConstant(UDistributionVectorConstant&&); \
	UDistributionVectorConstant(const UDistributionVectorConstant&); \
public: \
	ENGINE_API virtual ~UDistributionVectorConstant();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDistributionVectorConstant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorConstant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
