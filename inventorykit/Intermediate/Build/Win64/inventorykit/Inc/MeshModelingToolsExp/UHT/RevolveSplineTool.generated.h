// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RevolveSplineTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLSEXP_RevolveSplineTool_generated_h
#error "RevolveSplineTool.generated.h already included, missing '#pragma once' in RevolveSplineTool.h"
#endif
#define MESHMODELINGTOOLSEXP_RevolveSplineTool_generated_h

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevolveSplineToolProperties(); \
	friend struct Z_Construct_UClass_URevolveSplineToolProperties_Statics; \
public: \
	DECLARE_CLASS(URevolveSplineToolProperties, URevolveProperties, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(URevolveSplineToolProperties)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_49_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URevolveSplineToolProperties(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URevolveSplineToolProperties(URevolveSplineToolProperties&&); \
	URevolveSplineToolProperties(const URevolveSplineToolProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URevolveSplineToolProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevolveSplineToolProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URevolveSplineToolProperties) \
	NO_API virtual ~URevolveSplineToolProperties();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_46_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class URevolveSplineToolProperties>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetAxis);


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_109_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevolveSplineToolActionPropertySet(); \
	friend struct Z_Construct_UClass_URevolveSplineToolActionPropertySet_Statics; \
public: \
	DECLARE_CLASS(URevolveSplineToolActionPropertySet, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(URevolveSplineToolActionPropertySet)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_109_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URevolveSplineToolActionPropertySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URevolveSplineToolActionPropertySet(URevolveSplineToolActionPropertySet&&); \
	URevolveSplineToolActionPropertySet(const URevolveSplineToolActionPropertySet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URevolveSplineToolActionPropertySet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevolveSplineToolActionPropertySet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URevolveSplineToolActionPropertySet) \
	NO_API virtual ~URevolveSplineToolActionPropertySet();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_106_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_109_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_109_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_109_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_109_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class URevolveSplineToolActionPropertySet>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevolveSplineTool(); \
	friend struct Z_Construct_UClass_URevolveSplineTool_Statics; \
public: \
	DECLARE_CLASS(URevolveSplineTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(URevolveSplineTool) \
	virtual UObject* _getUObject() const override { return const_cast<URevolveSplineTool*>(this); }


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_131_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URevolveSplineTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URevolveSplineTool(URevolveSplineTool&&); \
	URevolveSplineTool(const URevolveSplineTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URevolveSplineTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevolveSplineTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URevolveSplineTool) \
	NO_API virtual ~URevolveSplineTool();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_126_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_131_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_131_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class URevolveSplineTool>();

#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_220_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevolveSplineToolBuilder(); \
	friend struct Z_Construct_UClass_URevolveSplineToolBuilder_Statics; \
public: \
	DECLARE_CLASS(URevolveSplineToolBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingToolsExp"), NO_API) \
	DECLARE_SERIALIZER(URevolveSplineToolBuilder)


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_220_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URevolveSplineToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URevolveSplineToolBuilder(URevolveSplineToolBuilder&&); \
	URevolveSplineToolBuilder(const URevolveSplineToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URevolveSplineToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevolveSplineToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URevolveSplineToolBuilder) \
	NO_API virtual ~URevolveSplineToolBuilder();


#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_217_PROLOG
#define FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_220_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_220_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h_220_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<class URevolveSplineToolBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_RevolveSplineTool_h


#define FOREACH_ENUM_EREVOLVESPLINESAMPLEMODE(op) \
	op(ERevolveSplineSampleMode::ControlPointsOnly) \
	op(ERevolveSplineSampleMode::PolyLineMaxError) \
	op(ERevolveSplineSampleMode::UniformSpacingAlongCurve) 

enum class ERevolveSplineSampleMode : uint8;
template<> struct TIsUEnumClass<ERevolveSplineSampleMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<ERevolveSplineSampleMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
