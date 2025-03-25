// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConstraintsScripting.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USceneComponent;
class UTickableConstraint;
class UTickableTransformConstraint;
class UTransformableComponentHandle;
class UTransformableHandle;
class UWorld;
enum class ETransformConstraintType : uint8;
#ifdef CONSTRAINTS_ConstraintsScripting_generated_h
#error "ConstraintsScripting.generated.h already included, missing '#pragma once' in ConstraintsScripting.h"
#endif
#define CONSTRAINTS_ConstraintsScripting_generated_h

#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveConstraint); \
	DECLARE_FUNCTION(execRemoveThisConstraint); \
	DECLARE_FUNCTION(execGetConstraintsArray); \
	DECLARE_FUNCTION(execAddConstraint); \
	DECLARE_FUNCTION(execCreateFromType); \
	DECLARE_FUNCTION(execCreateTransformableHandle); \
	DECLARE_FUNCTION(execCreateTransformableComponentHandle);


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConstraintsScriptingLibrary(); \
	friend struct Z_Construct_UClass_UConstraintsScriptingLibrary_Statics; \
public: \
	DECLARE_CLASS(UConstraintsScriptingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Constraints"), CONSTRAINTS_API) \
	DECLARE_SERIALIZER(UConstraintsScriptingLibrary)


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CONSTRAINTS_API UConstraintsScriptingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConstraintsScriptingLibrary(UConstraintsScriptingLibrary&&); \
	UConstraintsScriptingLibrary(const UConstraintsScriptingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CONSTRAINTS_API, UConstraintsScriptingLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConstraintsScriptingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConstraintsScriptingLibrary) \
	CONSTRAINTS_API virtual ~UConstraintsScriptingLibrary();


#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_20_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_25_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSTRAINTS_API UClass* StaticClass<class UConstraintsScriptingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
