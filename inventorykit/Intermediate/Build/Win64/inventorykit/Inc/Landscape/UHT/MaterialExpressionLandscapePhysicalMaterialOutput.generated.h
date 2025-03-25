// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_MaterialExpressionLandscapePhysicalMaterialOutput_generated_h
#error "MaterialExpressionLandscapePhysicalMaterialOutput.generated.h already included, missing '#pragma once' in MaterialExpressionLandscapePhysicalMaterialOutput.h"
#endif
#define LANDSCAPE_MaterialExpressionLandscapePhysicalMaterialOutput_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FPhysicalMaterialInput>();

#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionLandscapePhysicalMaterialOutput(); \
	friend struct Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionLandscapePhysicalMaterialOutput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionLandscapePhysicalMaterialOutput)


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API UMaterialExpressionLandscapePhysicalMaterialOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionLandscapePhysicalMaterialOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, UMaterialExpressionLandscapePhysicalMaterialOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionLandscapePhysicalMaterialOutput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionLandscapePhysicalMaterialOutput(UMaterialExpressionLandscapePhysicalMaterialOutput&&); \
	UMaterialExpressionLandscapePhysicalMaterialOutput(const UMaterialExpressionLandscapePhysicalMaterialOutput&); \
public: \
	LANDSCAPE_API virtual ~UMaterialExpressionLandscapePhysicalMaterialOutput();


#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_32_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_35_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class UMaterialExpressionLandscapePhysicalMaterialOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
