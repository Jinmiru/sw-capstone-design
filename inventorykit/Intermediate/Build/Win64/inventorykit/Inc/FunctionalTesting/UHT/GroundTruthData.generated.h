// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GroundTruthData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef FUNCTIONALTESTING_GroundTruthData_generated_h
#error "GroundTruthData.generated.h already included, missing '#pragma once' in GroundTruthData.h"
#endif
#define FUNCTIONALTESTING_GroundTruthData_generated_h

#define FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetObject); \
	DECLARE_FUNCTION(execCanModify); \
	DECLARE_FUNCTION(execLoadObject); \
	DECLARE_FUNCTION(execSaveObject);


#define FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGroundTruthData(); \
	friend struct Z_Construct_UClass_UGroundTruthData_Statics; \
public: \
	DECLARE_CLASS(UGroundTruthData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FunctionalTesting"), NO_API) \
	DECLARE_SERIALIZER(UGroundTruthData)


#define FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGroundTruthData(UGroundTruthData&&); \
	UGroundTruthData(const UGroundTruthData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGroundTruthData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGroundTruthData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGroundTruthData) \
	NO_API virtual ~UGroundTruthData();


#define FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_19_PROLOG
#define FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_22_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FUNCTIONALTESTING_API UClass* StaticClass<class UGroundTruthData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Developer_FunctionalTesting_Public_GroundTruthData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
