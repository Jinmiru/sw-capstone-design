// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstraintSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UConstraintSubsystem;
class UTickableConstraint;
#ifdef CONSTRAINTS_ConstraintSubsystem_generated_h
#error "ConstraintSubsystem.generated.h already included, missing '#pragma once' in ConstraintSubsystem.h"
#endif
#define CONSTRAINTS_ConstraintSubsystem_generated_h

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstraintsInWorld_Statics; \
	CONSTRAINTS_API static class UScriptStruct* StaticStruct();


template<> CONSTRAINTS_API UScriptStruct* StaticStruct<struct FConstraintsInWorld>();

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_47_DELEGATE \
static CONSTRAINTS_API void FOnConstraintAddedToSystem_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintAddedToSystem, UConstraintSubsystem* Mananger, UTickableConstraint* Constraint);


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_48_DELEGATE \
static CONSTRAINTS_API void FOnConstraintRemovedFromSystem_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintRemovedFromSystem, UConstraintSubsystem* Mananger, UTickableConstraint* Constraint, bool bDoNotCompensate);


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstraintSubsystem(); \
	friend struct Z_Construct_UClass_UConstraintSubsystem_Statics; \
public: \
	DECLARE_CLASS(UConstraintSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Constraints"), NO_API) \
	DECLARE_SERIALIZER(UConstraintSubsystem)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConstraintSubsystem(UConstraintSubsystem&&); \
	UConstraintSubsystem(const UConstraintSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConstraintSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConstraintSubsystem) \
	NO_API virtual ~UConstraintSubsystem();


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_40_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_43_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSTRAINTS_API UClass* StaticClass<class UConstraintSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Private_ConstraintSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
