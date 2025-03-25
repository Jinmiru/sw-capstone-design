// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpression.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpression_generated_h
#error "MaterialExpression.generated.h already included, missing '#pragma once' in MaterialExpression.h"
#endif
#define ENGINE_MaterialExpression_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_120_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FExpressionExecOutput_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FExpressionExecOutput>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_159_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMaterialExpressionCollection>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_186_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(UMaterialExpression, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_186_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpression(); \
	friend struct Z_Construct_UClass_UMaterialExpression_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpression, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpression) \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_186_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_186_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpression(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpression) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpression); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpression); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpression(UMaterialExpression&&); \
	UMaterialExpression(const UMaterialExpression&); \
public: \
	ENGINE_API virtual ~UMaterialExpression();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_183_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_186_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_186_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_186_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpression>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h


#define FOREACH_ENUM_EPOSITIONORIGIN(op) \
	op(EPositionOrigin::Absolute) \
	op(EPositionOrigin::CameraRelative) 

enum class EPositionOrigin : uint8;
template<> struct TIsUEnumClass<EPositionOrigin> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EPositionOrigin>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
