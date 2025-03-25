// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PropertySets/GeometrySelectionVisualizationProperties.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MODELINGCOMPONENTS_GeometrySelectionVisualizationProperties_generated_h
#error "GeometrySelectionVisualizationProperties.generated.h already included, missing '#pragma once' in GeometrySelectionVisualizationProperties.h"
#endif
#define MODELINGCOMPONENTS_GeometrySelectionVisualizationProperties_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeometrySelectionVisualizationProperties(); \
	friend struct Z_Construct_UClass_UGeometrySelectionVisualizationProperties_Statics; \
public: \
	DECLARE_CLASS(UGeometrySelectionVisualizationProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ModelingComponents"), NO_API) \
	DECLARE_SERIALIZER(UGeometrySelectionVisualizationProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeometrySelectionVisualizationProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometrySelectionVisualizationProperties(UGeometrySelectionVisualizationProperties&&); \
	UGeometrySelectionVisualizationProperties(const UGeometrySelectionVisualizationProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeometrySelectionVisualizationProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometrySelectionVisualizationProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometrySelectionVisualizationProperties) \
	NO_API virtual ~UGeometrySelectionVisualizationProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_27_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODELINGCOMPONENTS_API UClass* StaticClass<class UGeometrySelectionVisualizationProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_PropertySets_GeometrySelectionVisualizationProperties_h


#define FOREACH_ENUM_EGEOMETRYSELECTIONELEMENTTYPE(op) \
	op(EGeometrySelectionElementType::Vertex) \
	op(EGeometrySelectionElementType::Edge) \
	op(EGeometrySelectionElementType::Face) 

enum class EGeometrySelectionElementType : uint8;
template<> struct TIsUEnumClass<EGeometrySelectionElementType> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EGeometrySelectionElementType>();

#define FOREACH_ENUM_EGEOMETRYSELECTIONTOPOLOGYTYPE(op) \
	op(EGeometrySelectionTopologyType::Triangle) \
	op(EGeometrySelectionTopologyType::Polygroup) 

enum class EGeometrySelectionTopologyType : uint8;
template<> struct TIsUEnumClass<EGeometrySelectionTopologyType> { enum { Value = true }; };
template<> MODELINGCOMPONENTS_API UEnum* StaticEnum<EGeometrySelectionTopologyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
