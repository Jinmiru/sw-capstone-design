// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Materials/MaterialExpressionNeuralPostProcessNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_MaterialExpressionNeuralPostProcessNode_generated_h
#error "MaterialExpressionNeuralPostProcessNode.generated.h already included, missing '#pragma once' in MaterialExpressionNeuralPostProcessNode.h"
#endif
#define ENGINE_MaterialExpressionNeuralPostProcessNode_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionNeuralNetworkInput(); \
	friend struct Z_Construct_UClass_UMaterialExpressionNeuralNetworkInput_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionNeuralNetworkInput, UMaterialExpressionCustomOutput, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionNeuralNetworkInput)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionNeuralNetworkInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionNeuralNetworkInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionNeuralNetworkInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionNeuralNetworkInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionNeuralNetworkInput(UMaterialExpressionNeuralNetworkInput&&); \
	UMaterialExpressionNeuralNetworkInput(const UMaterialExpressionNeuralNetworkInput&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionNeuralNetworkInput();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_29_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_32_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionNeuralNetworkInput>();

#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionNeuralNetworkOutput(); \
	friend struct Z_Construct_UClass_UMaterialExpressionNeuralNetworkOutput_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionNeuralNetworkOutput, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UMaterialExpressionNeuralNetworkOutput)


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UMaterialExpressionNeuralNetworkOutput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionNeuralNetworkOutput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UMaterialExpressionNeuralNetworkOutput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionNeuralNetworkOutput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionNeuralNetworkOutput(UMaterialExpressionNeuralNetworkOutput&&); \
	UMaterialExpressionNeuralNetworkOutput(const UMaterialExpressionNeuralNetworkOutput&); \
public: \
	ENGINE_API virtual ~UMaterialExpressionNeuralNetworkOutput();


#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_74_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_77_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UMaterialExpressionNeuralNetworkOutput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNeuralPostProcessNode_h


#define FOREACH_ENUM_ENEURALINDEXTYPE(op) \
	op(NIT_TextureIndex) \
	op(NIT_BufferIndex) 

enum ENeuralIndexType : int;
template<> ENGINE_API UEnum* StaticEnum<ENeuralIndexType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
