// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialX/MaterialExpressions/MaterialExpressionLuminance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEIMPORT_MaterialExpressionLuminance_generated_h
#error "MaterialExpressionLuminance.generated.h already included, missing '#pragma once' in MaterialExpressionLuminance.h"
#endif
#define INTERCHANGEIMPORT_MaterialExpressionLuminance_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMaterialExpressionMaterialXLuminance(); \
	friend struct Z_Construct_UClass_UMaterialExpressionMaterialXLuminance_Statics; \
public: \
	DECLARE_CLASS(UMaterialExpressionMaterialXLuminance, UMaterialExpression, COMPILED_IN_FLAGS(0 | CLASS_Optional), CASTCLASS_None, TEXT("/Script/InterchangeImport"), INTERCHANGEIMPORT_API) \
	DECLARE_SERIALIZER(UMaterialExpressionMaterialXLuminance)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UMaterialExpressionMaterialXLuminance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaterialExpressionMaterialXLuminance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UMaterialExpressionMaterialXLuminance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaterialExpressionMaterialXLuminance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMaterialExpressionMaterialXLuminance(UMaterialExpressionMaterialXLuminance&&); \
	UMaterialExpressionMaterialXLuminance(const UMaterialExpressionMaterialXLuminance&); \
public: \
	INTERCHANGEIMPORT_API virtual ~UMaterialExpressionMaterialXLuminance();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_24_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_27_INCLASS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UMaterialExpressionMaterialXLuminance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Private_MaterialX_MaterialExpressions_MaterialExpressionLuminance_h


#define FOREACH_ENUM_EMATERIALXLUMINANCEMODE(op) \
	op(EMaterialXLuminanceMode::ACEScg) \
	op(EMaterialXLuminanceMode::Rec709) \
	op(EMaterialXLuminanceMode::Rec2020) \
	op(EMaterialXLuminanceMode::Rec2100) \
	op(EMaterialXLuminanceMode::Custom) 

enum class EMaterialXLuminanceMode : uint8;
template<> struct TIsUEnumClass<EMaterialXLuminanceMode> { enum { Value = true }; };
template<> INTERCHANGEIMPORT_API UEnum* StaticEnum<EMaterialXLuminanceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
