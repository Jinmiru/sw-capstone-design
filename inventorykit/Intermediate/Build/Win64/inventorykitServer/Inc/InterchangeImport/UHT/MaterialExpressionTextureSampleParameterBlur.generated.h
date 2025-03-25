// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialX/MaterialExpressions/MaterialExpressionTextureSampleParameterBlur.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEIMPORT_MaterialExpressionTextureSampleParameterBlur_generated_h
#error "MaterialExpressionTextureSampleParameterBlur.generated.h already included, missing '#pragma once' in MaterialExpressionTextureSampleParameterBlur.h"
#endif
#define INTERCHANGEIMPORT_MaterialExpressionTextureSampleParameterBlur_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialXTextureSampleParameterBlur(); \
	friend struct Z_Construct_UClass_UMaterialExpressionMaterialXTextureSampleParameterBlur_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionMaterialXTextureSampleParameterBlur, UMaterialExpressionTextureSampleParameter2D, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/InterchangeImport"), INTERCHANGEIMPORT_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialXTextureSampleParameterBlur)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UMaterialExpressionMaterialXTextureSampleParameterBlur(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialXTextureSampleParameterBlur) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UMaterialExpressionMaterialXTextureSampleParameterBlur); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialXTextureSampleParameterBlur); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialXTextureSampleParameterBlur(UMaterialExpressionMaterialXTextureSampleParameterBlur&&); \
	UMaterialExpressionMaterialXTextureSampleParameterBlur(const UMaterialExpressionMaterialXTextureSampleParameterBlur&); \
public: \
	INTERCHANGEIMPORT_API virtual ~UMaterialExpressionMaterialXTextureSampleParameterBlur();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_23_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_26_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UMaterialExpressionMaterialXTextureSampleParameterBlur>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_MaterialExpressions_MaterialExpressionTextureSampleParameterBlur_h


#define FOREACH_ENUM_EMATERIALXTEXTURESAMPLEBLURFILTER(op) \
	op(EMaterialXTextureSampleBlurFilter::Box) \
	op(EMaterialXTextureSampleBlurFilter::Gaussian) 

enum class EMaterialXTextureSampleBlurFilter : uint8;
template<> struct TIsUEnumClass<EMaterialXTextureSampleBlurFilter> { enum { Value = true }; };
template<> INTERCHANGEIMPORT_API UEnum* StaticEnum<EMaterialXTextureSampleBlurFilter>();

#define FOREACH_ENUM_EMATERIALXTEXTURESAMPLEBLURKERNEL(op) \
	op(EMAterialXTextureSampleBlurKernel::Kernel1) \
	op(EMAterialXTextureSampleBlurKernel::Kernel3) \
	op(EMAterialXTextureSampleBlurKernel::Kernel5) \
	op(EMAterialXTextureSampleBlurKernel::Kernel7) 

enum class EMAterialXTextureSampleBlurKernel;
template<> struct TIsUEnumClass<EMAterialXTextureSampleBlurKernel> { enum { Value = true }; };
template<> INTERCHANGEIMPORT_API UEnum* StaticEnum<EMAterialXTextureSampleBlurKernel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
