// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionGenericConstant.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionGenericConstant_generated_h
#error "MaterialExpressionGenericConstant.generated.h already included, missing '#pragma once' in MaterialExpressionGenericConstant.h"
#endif
#define ENGINE_MaterialExpressionGenericConstant_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionGenericConstant(); \
	friend struct Z_Construct_UClass_UMaterialExpressionGenericConstant_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionGenericConstant, UMaterialExpression, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionGenericConstant)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionGenericConstant(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionGenericConstant) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionGenericConstant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionGenericConstant); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionGenericConstant(UMaterialExpressionGenericConstant&&); \
	UMaterialExpressionGenericConstant(const UMaterialExpressionGenericConstant&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionGenericConstant();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionGenericConstant>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionConstantDouble(); \
	friend struct Z_Construct_UClass_UMaterialExpressionConstantDouble_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionConstantDouble, UMaterialExpressionGenericConstant, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionConstantDouble)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionConstantDouble(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionConstantDouble) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionConstantDouble); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionConstantDouble); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionConstantDouble(UMaterialExpressionConstantDouble&&); \
	UMaterialExpressionConstantDouble(const UMaterialExpressionConstantDouble&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionConstantDouble();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_28_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_31_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionConstantDouble>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionGenericConstant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
