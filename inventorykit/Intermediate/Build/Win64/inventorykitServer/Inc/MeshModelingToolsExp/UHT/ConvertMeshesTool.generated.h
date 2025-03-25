// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ConvertMeshesTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLSEXP_ConvertMeshesTool_generated_h
#error "ConvertMeshesTool.generated.h already included, missing '#pragma once' in ConvertMeshesTool.h"
#endif
#define MESHMODELINGTOOLSEXP_ConvertMeshesTool_generated_h

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConvertMeshesToolBuilder(); \
	friend struct Z_Construct_UClass_UConvertMeshesToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UConvertMeshesToolBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UConvertMeshesToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConvertMeshesToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConvertMeshesToolBuilder(UConvertMeshesToolBuilder&&); \
	UConvertMeshesToolBuilder(const UConvertMeshesToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConvertMeshesToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConvertMeshesToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConvertMeshesToolBuilder) \
	NO_API virtual ~UConvertMeshesToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_17_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UConvertMeshesToolBuilder>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConvertMeshesToolProperties(); \
	friend struct Z_Construct_UClass_UConvertMeshesToolProperties_Statics; \
public: \
	DECLARE_CLASS(UConvertMeshesToolProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UConvertMeshesToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConvertMeshesToolProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConvertMeshesToolProperties(UConvertMeshesToolProperties&&); \
	UConvertMeshesToolProperties(const UConvertMeshesToolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConvertMeshesToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConvertMeshesToolProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConvertMeshesToolProperties) \
	NO_API virtual ~UConvertMeshesToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_29_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_32_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UConvertMeshesToolProperties>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_52_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConvertMeshesTool(); \
	friend struct Z_Construct_UClass_UConvertMeshesTool_Statics; \
public: \
	DECLARE_CLASS(UConvertMeshesTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(UConvertMeshesTool) \
	virtual UObject* _getUObject() const override { return const_cast<UConvertMeshesTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_52_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConvertMeshesTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UConvertMeshesTool(UConvertMeshesTool&&); \
	UConvertMeshesTool(const UConvertMeshesTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConvertMeshesTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConvertMeshesTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UConvertMeshesTool) \
	NO_API virtual ~UConvertMeshesTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_47_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_52_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_52_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class UConvertMeshesTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
