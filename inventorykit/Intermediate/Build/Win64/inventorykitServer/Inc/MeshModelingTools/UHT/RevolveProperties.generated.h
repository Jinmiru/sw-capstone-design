// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Properties/RevolveProperties.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLS_RevolveProperties_generated_h
#error "RevolveProperties.generated.h already included, missing '#pragma once' in RevolveProperties.h"
#endif
#define MESHMODELINGTOOLS_RevolveProperties_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURevolveProperties(); \
	friend struct Z_Construct_UClass_URevolveProperties_Statics; \
public: \
	DECLARE_CLASS(URevolveProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), NO_API) \
	DECLARE_SERIALIZER(URevolveProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URevolveProperties(URevolveProperties&&); \
	URevolveProperties(const URevolveProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URevolveProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URevolveProperties); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URevolveProperties) \
	NO_API virtual ~URevolveProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_56_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_59_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLS_API UClass* StaticClass<class URevolveProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Properties_RevolveProperties_h


#define FOREACH_ENUM_EREVOLVEPROPERTIESCAPFILLMODE(op) \
	op(ERevolvePropertiesCapFillMode::None) \
	op(ERevolvePropertiesCapFillMode::CenterFan) \
	op(ERevolvePropertiesCapFillMode::Delaunay) \
	op(ERevolvePropertiesCapFillMode::EarClipping) 

enum class ERevolvePropertiesCapFillMode : uint8;
template<> struct TIsUEnumClass<ERevolvePropertiesCapFillMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<ERevolvePropertiesCapFillMode>();

#define FOREACH_ENUM_EREVOLVEPROPERTIESPOLYGROUPMODE(op) \
	op(ERevolvePropertiesPolygroupMode::PerShape) \
	op(ERevolvePropertiesPolygroupMode::PerFace) \
	op(ERevolvePropertiesPolygroupMode::PerRevolveStep) \
	op(ERevolvePropertiesPolygroupMode::PerPathSegment) 

enum class ERevolvePropertiesPolygroupMode : uint8;
template<> struct TIsUEnumClass<ERevolvePropertiesPolygroupMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<ERevolvePropertiesPolygroupMode>();

#define FOREACH_ENUM_EREVOLVEPROPERTIESQUADSPLIT(op) \
	op(ERevolvePropertiesQuadSplit::Uniform) \
	op(ERevolvePropertiesQuadSplit::Compact) 

enum class ERevolvePropertiesQuadSplit : uint8;
template<> struct TIsUEnumClass<ERevolvePropertiesQuadSplit> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<ERevolvePropertiesQuadSplit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
