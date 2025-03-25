// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstraintsManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConstraintsManager;
class UTickableConstraint;
#ifdef CONSTRAINTS_ConstraintsManager_generated_h
#error "ConstraintsManager.generated.h already included, missing '#pragma once' in ConstraintsManager.h"
#endif
#define CONSTRAINTS_ConstraintsManager_generated_h

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintTickFunction_Statics; \
	CONSTRAINTS_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> CONSTRAINTS_API UScriptStruct* StaticStruct<struct FConstraintTickFunction>();

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTickableConstraint(); \
	friend struct Z_Construct_UClass_UTickableConstraint_Statics; \
public: \
	DECLARE_CLASS(UTickableConstraint, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Constraints"), CONSTRAINTS_API) \
	DECLARE_SERIALIZER(UTickableConstraint)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_74_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTickableConstraint(UTickableConstraint&&); \
	UTickableConstraint(const UTickableConstraint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSTRAINTS_API, UTickableConstraint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickableConstraint); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UTickableConstraint)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_71_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_74_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSTRAINTS_API UClass* StaticClass<class UTickableConstraint>();

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_165_DELEGATE \
static CONSTRAINTS_API void FOnConstraintAdded_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintAdded, UConstraintsManager* Mananger, UTickableConstraint* Constraint);


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_166_DELEGATE \
static CONSTRAINTS_API void FOnConstraintRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintRemoved, UConstraintsManager* Mananger, UTickableConstraint* Constraint, bool bDoNotCompensate);


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_159_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstraintsManager(); \
	friend struct Z_Construct_UClass_UConstraintsManager_Statics; \
public: \
	DECLARE_CLASS(UConstraintsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Constraints"), CONSTRAINTS_API) \
	DECLARE_SERIALIZER(UConstraintsManager)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_159_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConstraintsManager(UConstraintsManager&&); \
	UConstraintsManager(const UConstraintsManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSTRAINTS_API, UConstraintsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstraintsManager)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_156_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_159_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_159_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_159_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSTRAINTS_API UClass* StaticClass<class UConstraintsManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
