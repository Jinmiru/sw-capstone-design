// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/SkeletalMeshSourceModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SkeletalMeshSourceModel_generated_h
#error "SkeletalMeshSourceModel.generated.h already included, missing '#pragma once' in SkeletalMeshSourceModel.h"
#endif
#define ENGINE_SkeletalMeshSourceModel_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkeletalMeshDescriptionBulkData(); \
	friend struct Z_Construct_UClass_USkeletalMeshDescriptionBulkData_Statics; \
public: \
	DECLARE_CLASS(USkeletalMeshDescriptionBulkData, UMeshDescriptionBaseBulkData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USkeletalMeshDescriptionBulkData)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USkeletalMeshDescriptionBulkData(USkeletalMeshDescriptionBulkData&&); \
	USkeletalMeshDescriptionBulkData(const USkeletalMeshDescriptionBulkData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USkeletalMeshDescriptionBulkData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkeletalMeshDescriptionBulkData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USkeletalMeshDescriptionBulkData) \
	ENGINE_API virtual ~USkeletalMeshDescriptionBulkData();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USkeletalMeshDescriptionBulkData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSkeletalMeshSourceModel_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSkeletalMeshSourceModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSourceModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
