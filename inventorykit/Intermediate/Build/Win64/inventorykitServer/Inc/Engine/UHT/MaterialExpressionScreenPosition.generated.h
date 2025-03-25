// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionScreenPosition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionScreenPosition_generated_h
#error "MaterialExpressionScreenPosition.generated.h already included, missing '#pragma once' in MaterialExpressionScreenPosition.h"
#endif
#define ENGINE_MaterialExpressionScreenPosition_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionScreenPosition(); \
	friend struct Z_Construct_UClass_UMaterialExpressionScreenPosition_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionScreenPosition, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UMaterialExpressionScreenPosition)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaterialExpressionScreenPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionScreenPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaterialExpressionScreenPosition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionScreenPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionScreenPosition(UMaterialExpressionScreenPosition&&); \
	UMaterialExpressionScreenPosition(const UMaterialExpressionScreenPosition&); \
public: \
	NO_API virtual ~UMaterialExpressionScreenPosition();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_15_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionScreenPosition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionScreenPosition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
