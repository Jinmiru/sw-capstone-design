// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MaterialX/InterchangeMaterialXTranslator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEIMPORT_InterchangeMaterialXTranslator_generated_h
#error "InterchangeMaterialXTranslator.generated.h already included, missing '#pragma once' in InterchangeMaterialXTranslator.h"
#endif
#define INTERCHANGEIMPORT_InterchangeMaterialXTranslator_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialXTranslator(); \
	friend struct Z_Construct_UClass_UInterchangeMaterialXTranslator_Statics; \
public: \
	DECLARE_CLASS(UInterchangeMaterialXTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeMaterialXTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeMaterialXTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeMaterialXTranslator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeMaterialXTranslator(UInterchangeMaterialXTranslator&&); \
	UInterchangeMaterialXTranslator(const UInterchangeMaterialXTranslator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeMaterialXTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialXTranslator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeMaterialXTranslator) \
	NO_API virtual ~UInterchangeMaterialXTranslator();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_15_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UInterchangeMaterialXTranslator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_MaterialX_InterchangeMaterialXTranslator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
