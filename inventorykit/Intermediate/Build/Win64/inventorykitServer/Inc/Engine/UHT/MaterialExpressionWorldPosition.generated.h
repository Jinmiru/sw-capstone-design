// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionWorldPosition.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionWorldPosition_generated_h
#error "MaterialExpressionWorldPosition.generated.h already included, missing '#pragma once' in MaterialExpressionWorldPosition.h"
#endif
#define ENGINE_MaterialExpressionWorldPosition_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWorldPosition_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionWorldPosition(); \
	friend struct Z_Construct_UClass_UMaterialExpressionWorldPosition_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionWorldPosition, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionWorldPosition)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWorldPosition_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionWorldPosition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionWorldPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionWorldPosition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionWorldPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionWorldPosition(UMaterialExpressionWorldPosition&&); \
	UMaterialExpressionWorldPosition(const UMaterialExpressionWorldPosition&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionWorldPosition();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWorldPosition_h_30_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWorldPosition_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWorldPosition_h_33_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWorldPosition_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionWorldPosition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionWorldPosition_h


#define FOREACH_ENUM_EWORLDPOSITIONINCLUDEDOFFSETS(op) \
	op(WPT_Default) \
	op(WPT_ExcludeAllShaderOffsets) \
	op(WPT_CameraRelative) \
	op(WPT_CameraRelativeNoOffsets) 

enum EWorldPositionIncludedOffsets : int;
template<> ENGINE_API UEnum* StaticEnum<EWorldPositionIncludedOffsets>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
