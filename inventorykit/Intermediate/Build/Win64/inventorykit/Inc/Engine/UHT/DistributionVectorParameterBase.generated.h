// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Distributions/DistributionVectorParameterBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DistributionVectorParameterBase_generated_h
#error "DistributionVectorParameterBase.generated.h already included, missing '#pragma once' in DistributionVectorParameterBase.h"
#endif
#define ENGINE_DistributionVectorParameterBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParameterBase_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUDistributionVectorParameterBase(); \
	friend struct Z_Construct_UClass_UDistributionVectorParameterBase_Statics; \
public: \
	DECLARE_CLASS(UDistributionVectorParameterBase, UDistributionVectorConstant, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDistributionVectorParameterBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParameterBase_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDistributionVectorParameterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDistributionVectorParameterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDistributionVectorParameterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDistributionVectorParameterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDistributionVectorParameterBase(UDistributionVectorParameterBase&&); \
	UDistributionVectorParameterBase(const UDistributionVectorParameterBase&); \
public: \
	ENGINE_API virtual ~UDistributionVectorParameterBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParameterBase_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParameterBase_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParameterBase_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParameterBase_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDistributionVectorParameterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Distributions_DistributionVectorParameterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
