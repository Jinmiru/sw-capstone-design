// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Curves/CurveBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CurveBase_generated_h
#error "CurveBase.generated.h already included, missing '#pragma once' in CurveBase.h"
#endif
#define ENGINE_CurveBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetValueRange); \
	DECLARE_FUNCTION(execGetTimeRange);


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCurveBase(); \
	friend struct Z_Construct_UClass_UCurveBase_Statics; \
public: \
	DECLARE_CLASS(UCurveBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UCurveBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UCurveBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UCurveBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCurveBase(UCurveBase&&); \
	UCurveBase(const UCurveBase&); \
public: \
	ENGINE_API virtual ~UCurveBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_21_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCurveBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
