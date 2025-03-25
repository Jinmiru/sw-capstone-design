// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionRerouteBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionRerouteBase_generated_h
#error "MaterialExpressionRerouteBase.generated.h already included, missing '#pragma once' in MaterialExpressionRerouteBase.h"
#endif
#define ENGINE_MaterialExpressionRerouteBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionRerouteBase(); \
	friend struct Z_Construct_UClass_UMaterialExpressionRerouteBase_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionRerouteBase, UMaterialExpression, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionRerouteBase)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionRerouteBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionRerouteBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionRerouteBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionRerouteBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionRerouteBase(UMaterialExpressionRerouteBase&&); \
	UMaterialExpressionRerouteBase(const UMaterialExpressionRerouteBase&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionRerouteBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_10_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_13_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionRerouteBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionRerouteBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
