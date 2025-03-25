// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/StereoLayerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
struct FEquirectProps;
#ifdef ENGINE_StereoLayerComponent_generated_h
#error "StereoLayerComponent.generated.h already included, missing '#pragma once' in StereoLayerComponent.h"
#endif
#define ENGINE_StereoLayerComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFlagNames);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEditorFlagCollector(); \
	friend struct Z_Construct_UClass_UEditorFlagCollector_Statics; \
public: \
	DECLARE_CLASS(UEditorFlagCollector, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UEditorFlagCollector)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEditorFlagCollector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEditorFlagCollector(UEditorFlagCollector&&); \
	UEditorFlagCollector(const UEditorFlagCollector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEditorFlagCollector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEditorFlagCollector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEditorFlagCollector) \
	NO_API virtual ~UEditorFlagCollector();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_48_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEditorFlagCollector>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShape(); \
	friend struct Z_Construct_UClass_UStereoLayerShape_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShape, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStereoLayerShape)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStereoLayerShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStereoLayerShape(UStereoLayerShape&&); \
	UStereoLayerShape(const UStereoLayerShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerShape); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShape); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShape) \
	ENGINE_API virtual ~UStereoLayerShape();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_58_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_61_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShape>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_76_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeQuad(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeQuad_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeQuad, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeQuad)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_76_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStereoLayerShapeQuad(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStereoLayerShapeQuad(UStereoLayerShapeQuad&&); \
	UStereoLayerShapeQuad(const UStereoLayerShapeQuad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerShapeQuad); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeQuad); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeQuad) \
	ENGINE_API virtual ~UStereoLayerShapeQuad();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_73_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_76_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_76_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_76_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeQuad>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetHeight); \
	DECLARE_FUNCTION(execSetOverlayArc); \
	DECLARE_FUNCTION(execSetRadius);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCylinder(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeCylinder_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeCylinder, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeCylinder)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStereoLayerShapeCylinder(UStereoLayerShapeCylinder&&); \
	UStereoLayerShapeCylinder(const UStereoLayerShapeCylinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerShapeCylinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCylinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStereoLayerShapeCylinder) \
	ENGINE_API virtual ~UStereoLayerShapeCylinder();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_84_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeCylinder>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCubemap(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeCubemap_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeCubemap, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeCubemap)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStereoLayerShapeCubemap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStereoLayerShapeCubemap(UStereoLayerShapeCubemap&&); \
	UStereoLayerShapeCubemap(const UStereoLayerShapeCubemap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerShapeCubemap); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCubemap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeCubemap) \
	ENGINE_API virtual ~UStereoLayerShapeCubemap();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_121_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_124_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeCubemap>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquirectProps_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEquirectProps>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetEquirectProps);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_207_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeEquirect(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeEquirect_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeEquirect, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeEquirect)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_207_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStereoLayerShapeEquirect(UStereoLayerShapeEquirect&&); \
	UStereoLayerShapeEquirect(const UStereoLayerShapeEquirect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerShapeEquirect); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeEquirect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStereoLayerShapeEquirect) \
	ENGINE_API virtual ~UStereoLayerShapeEquirect();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_204_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_207_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_207_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_207_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_207_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeEquirect>();

#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_271_RPC_WRAPPERS \
	DECLARE_FUNCTION(execMarkTextureForUpdate); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetEquirectProps); \
	DECLARE_FUNCTION(execGetUVRect); \
	DECLARE_FUNCTION(execSetUVRect); \
	DECLARE_FUNCTION(execGetQuadSize); \
	DECLARE_FUNCTION(execSetQuadSize); \
	DECLARE_FUNCTION(execGetLeftTexture); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetLeftTexture); \
	DECLARE_FUNCTION(execSetTexture);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_271_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStereoLayerComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_271_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerComponent(); \
	friend struct Z_Construct_UClass_UStereoLayerComponent_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UStereoLayerComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_271_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_271_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UStereoLayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UStereoLayerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UStereoLayerComponent(UStereoLayerComponent&&); \
	UStereoLayerComponent(const UStereoLayerComponent&); \
public: \
	ENGINE_API virtual ~UStereoLayerComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_268_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_271_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_271_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_271_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_271_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h


#define FOREACH_ENUM_ESTEREOLAYERTYPE(op) \
	op(SLT_WorldLocked) \
	op(SLT_TrackerLocked) \
	op(SLT_FaceLocked) 

enum EStereoLayerType : int;
template<> ENGINE_API UEnum* StaticEnum<EStereoLayerType>();

#define FOREACH_ENUM_ESTEREOLAYERSHAPE(op) \
	op(SLSH_QuadLayer) \
	op(SLSH_CylinderLayer) \
	op(SLSH_CubemapLayer) \
	op(SLSH_EquirectLayer) 

enum EStereoLayerShape : int;
template<> ENGINE_API UEnum* StaticEnum<EStereoLayerShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
