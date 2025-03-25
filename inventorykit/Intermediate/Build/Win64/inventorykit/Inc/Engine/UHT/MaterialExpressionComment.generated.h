// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionComment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionComment_generated_h
#error "MaterialExpressionComment.generated.h already included, missing '#pragma once' in MaterialExpressionComment.h"
#endif
#define ENGINE_MaterialExpressionComment_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionComment(); \
	friend struct Z_Construct_UClass_UMaterialExpressionComment_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionComment, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionComment)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionComment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionComment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionComment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionComment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionComment(UMaterialExpressionComment&&); \
	UMaterialExpressionComment(const UMaterialExpressionComment&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionComment();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionComment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
