// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionQualitySwitch.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionQualitySwitch_generated_h
#error "MaterialExpressionQualitySwitch.generated.h already included, missing '#pragma once' in MaterialExpressionQualitySwitch.h"
#endif
#define ENGINE_MaterialExpressionQualitySwitch_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionQualitySwitch(); \
	friend struct Z_Construct_UClass_UMaterialExpressionQualitySwitch_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionQualitySwitch, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionQualitySwitch)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionQualitySwitch(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionQualitySwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionQualitySwitch); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionQualitySwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionQualitySwitch(UMaterialExpressionQualitySwitch&&); \
	UMaterialExpressionQualitySwitch(const UMaterialExpressionQualitySwitch&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionQualitySwitch();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionQualitySwitch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionQualitySwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
