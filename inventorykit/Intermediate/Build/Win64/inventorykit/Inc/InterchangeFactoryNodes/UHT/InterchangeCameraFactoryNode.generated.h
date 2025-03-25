// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeCameraFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECameraFocusMethod : uint8;
#ifdef INTERCHANGEFACTORYNODES_InterchangeCameraFactoryNode_generated_h
#error "InterchangeCameraFactoryNode.generated.h already included, missing '#pragma once' in InterchangeCameraFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeCameraFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomFocusMethod); \
	DECLARE_FUNCTION(execGetCustomFocusMethod); \
	DECLARE_FUNCTION(execSetCustomSensorHeight); \
	DECLARE_FUNCTION(execGetCustomSensorHeight); \
	DECLARE_FUNCTION(execSetCustomSensorWidth); \
	DECLARE_FUNCTION(execGetCustomSensorWidth); \
	DECLARE_FUNCTION(execSetCustomFocalLength); \
	DECLARE_FUNCTION(execGetCustomFocalLength);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePhysicalCameraFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangePhysicalCameraFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangePhysicalCameraFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePhysicalCameraFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePhysicalCameraFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangePhysicalCameraFactoryNode(UInterchangePhysicalCameraFactoryNode&&); \
	UInterchangePhysicalCameraFactoryNode(const UInterchangePhysicalCameraFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePhysicalCameraFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePhysicalCameraFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangePhysicalCameraFactoryNode) \
	NO_API virtual ~UInterchangePhysicalCameraFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_14_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangePhysicalCameraFactoryNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomFieldOfView); \
	DECLARE_FUNCTION(execGetCustomFieldOfView); \
	DECLARE_FUNCTION(execSetCustomAspectRatio); \
	DECLARE_FUNCTION(execGetCustomAspectRatio); \
	DECLARE_FUNCTION(execSetCustomFarClipPlane); \
	DECLARE_FUNCTION(execGetCustomFarClipPlane); \
	DECLARE_FUNCTION(execSetCustomNearClipPlane); \
	DECLARE_FUNCTION(execGetCustomNearClipPlane); \
	DECLARE_FUNCTION(execSetCustomWidth); \
	DECLARE_FUNCTION(execGetCustomWidth); \
	DECLARE_FUNCTION(execSetCustomProjectionMode); \
	DECLARE_FUNCTION(execGetCustomProjectionMode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeStandardCameraFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeStandardCameraFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeStandardCameraFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeStandardCameraFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeStandardCameraFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeStandardCameraFactoryNode(UInterchangeStandardCameraFactoryNode&&); \
	UInterchangeStandardCameraFactoryNode(const UInterchangeStandardCameraFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeStandardCameraFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeStandardCameraFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeStandardCameraFactoryNode) \
	NO_API virtual ~UInterchangeStandardCameraFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_98_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeStandardCameraFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCameraFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
