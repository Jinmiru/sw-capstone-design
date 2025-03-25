// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ToolActivities/PolyEditExtrudeEdgeActivity.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MESHMODELINGTOOLS_PolyEditExtrudeEdgeActivity_generated_h
#error "PolyEditExtrudeEdgeActivity.generated.h already included, missing '#pragma once' in PolyEditExtrudeEdgeActivity.h"
#endif
#define MESHMODELINGTOOLS_PolyEditExtrudeEdgeActivity_generated_h

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPolyEditExtrudeEdgeActivityProperties(); \
	friend struct Z_Construct_UClass_UPolyEditExtrudeEdgeActivityProperties_Statics; \
public: \
	DECLARE_CLASS(UPolyEditExtrudeEdgeActivityProperties, UInteractiveToolPropertySet, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), NO_API) \
	DECLARE_SERIALIZER(UPolyEditExtrudeEdgeActivityProperties)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPolyEditExtrudeEdgeActivityProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPolyEditExtrudeEdgeActivityProperties(UPolyEditExtrudeEdgeActivityProperties&&); \
	UPolyEditExtrudeEdgeActivityProperties(const UPolyEditExtrudeEdgeActivityProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPolyEditExtrudeEdgeActivityProperties); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolyEditExtrudeEdgeActivityProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPolyEditExtrudeEdgeActivityProperties) \
	NO_API virtual ~UPolyEditExtrudeEdgeActivityProperties();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_37_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLS_API UClass* StaticClass<class UPolyEditExtrudeEdgeActivityProperties>();

#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPolyEditExtrudeEdgeActivity(); \
	friend struct Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_Statics; \
public: \
	DECLARE_CLASS(UPolyEditExtrudeEdgeActivity, UInteractiveToolActivity, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/MeshModelingTools"), NO_API) \
	DECLARE_SERIALIZER(UPolyEditExtrudeEdgeActivity)


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPolyEditExtrudeEdgeActivity(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPolyEditExtrudeEdgeActivity(UPolyEditExtrudeEdgeActivity&&); \
	UPolyEditExtrudeEdgeActivity(const UPolyEditExtrudeEdgeActivity&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPolyEditExtrudeEdgeActivity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPolyEditExtrudeEdgeActivity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPolyEditExtrudeEdgeActivity) \
	NO_API virtual ~UPolyEditExtrudeEdgeActivity();


#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_71_PROLOG
#define FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MESHMODELINGTOOLS_API UClass* StaticClass<class UPolyEditExtrudeEdgeActivity>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Private_ToolActivities_PolyEditExtrudeEdgeActivity_h


#define FOREACH_ENUM_EPOLYEDITEXTRUDEEDGEDIRECTIONMODE(op) \
	op(EPolyEditExtrudeEdgeDirectionMode::LocalExtrudeFrames) \
	op(EPolyEditExtrudeEdgeDirectionMode::SingleDirection) 

enum class EPolyEditExtrudeEdgeDirectionMode;
template<> struct TIsUEnumClass<EPolyEditExtrudeEdgeDirectionMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EPolyEditExtrudeEdgeDirectionMode>();

#define FOREACH_ENUM_EPOLYEDITEXTRUDEEDGEDISTANCEMODE(op) \
	op(EPolyEditExtrudeEdgeDistanceMode::Fixed) \
	op(EPolyEditExtrudeEdgeDistanceMode::Gizmo) 

enum class EPolyEditExtrudeEdgeDistanceMode;
template<> struct TIsUEnumClass<EPolyEditExtrudeEdgeDistanceMode> { enum { Value = true }; };
template<> MESHMODELINGTOOLS_API UEnum* StaticEnum<EPolyEditExtrudeEdgeDistanceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
