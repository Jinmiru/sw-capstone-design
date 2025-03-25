// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fbx/InterchangeFbxTranslator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGEIMPORT_InterchangeFbxTranslator_generated_h
#error "InterchangeFbxTranslator.generated.h already included, missing '#pragma once' in InterchangeFbxTranslator.h"
#endif
#define INTERCHANGEIMPORT_InterchangeFbxTranslator_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFbxTranslatorSettings(); \
	friend struct Z_Construct_UClass_UInterchangeFbxTranslatorSettings_Statics; \
public: \
	DECLARE_CLASS(UInterchangeFbxTranslatorSettings, UInterchangeTranslatorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), INTERCHANGEIMPORT_API) \
	DECLARE_SERIALIZER(UInterchangeFbxTranslatorSettings)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INTERCHANGEIMPORT_API UInterchangeFbxTranslatorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeFbxTranslatorSettings(UInterchangeFbxTranslatorSettings&&); \
	UInterchangeFbxTranslatorSettings(const UInterchangeFbxTranslatorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGEIMPORT_API, UInterchangeFbxTranslatorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFbxTranslatorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeFbxTranslatorSettings) \
	INTERCHANGEIMPORT_API virtual ~UInterchangeFbxTranslatorSettings();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_24_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UInterchangeFbxTranslatorSettings>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFbxTranslator(); \
	friend struct Z_Construct_UClass_UInterchangeFbxTranslator_Statics; \
public: \
	DECLARE_CLASS(UInterchangeFbxTranslator, UInterchangeTranslatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeImport"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeFbxTranslator) \
	virtual UObject* _getUObject() const override { return const_cast<UInterchangeFbxTranslator*>(this); }


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_50_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeFbxTranslator(UInterchangeFbxTranslator&&); \
	UInterchangeFbxTranslator(const UInterchangeFbxTranslator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeFbxTranslator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFbxTranslator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeFbxTranslator) \
	NO_API virtual ~UInterchangeFbxTranslator();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_44_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_50_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEIMPORT_API UClass* StaticClass<class UInterchangeFbxTranslator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Fbx_InterchangeFbxTranslator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
