// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolHostCustomizationAPI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGCOMPONENTS_ToolHostCustomizationAPI_generated_h
#error "ToolHostCustomizationAPI.generated.h already included, missing '#pragma once' in ToolHostCustomizationAPI.h"
#endif
#define MODELINGCOMPONENTS_ToolHostCustomizationAPI_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MODELINGCOMPONENTS_API UToolHostCustomizationAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UToolHostCustomizationAPI(UToolHostCustomizationAPI&&); \
	UToolHostCustomizationAPI(const UToolHostCustomizationAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MODELINGCOMPONENTS_API, UToolHostCustomizationAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolHostCustomizationAPI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolHostCustomizationAPI) \
	MODELINGCOMPONENTS_API virtual ~UToolHostCustomizationAPI();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUToolHostCustomizationAPI(); \
	friend struct Z_Construct_UClass_UToolHostCustomizationAPI_Statics; \
public: \
	DECLARE_CLASS(UToolHostCustomizationAPI, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModelingComponents"), MODELINGCOMPONENTS_API) \
	DECLARE_SERIALIZER(UToolHostCustomizationAPI)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IToolHostCustomizationAPI() {} \
public: \
	typedef UToolHostCustomizationAPI UClassType; \
	typedef IToolHostCustomizationAPI ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_15_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UToolHostCustomizationAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_ToolHostCustomizationAPI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
