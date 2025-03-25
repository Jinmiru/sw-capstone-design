// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeVariantSetNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGENODES_InterchangeVariantSetNode_generated_h
#error "InterchangeVariantSetNode.generated.h already included, missing '#pragma once' in InterchangeVariantSetNode.h"
#endif
#define INTERCHANGENODES_InterchangeVariantSetNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveCustomDependencyUid); \
	DECLARE_FUNCTION(execAddCustomDependencyUid); \
	DECLARE_FUNCTION(execGetCustomDependencyUid); \
	DECLARE_FUNCTION(execGetCustomDependencyUids); \
	DECLARE_FUNCTION(execGetCustomDependencyUidCount); \
	DECLARE_FUNCTION(execSetCustomVariantsPayloadKey); \
	DECLARE_FUNCTION(execGetCustomVariantsPayloadKey); \
	DECLARE_FUNCTION(execSetCustomDisplayText); \
	DECLARE_FUNCTION(execGetCustomDisplayText);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeVariantSetNode(); \
	friend struct Z_Construct_UClass_UInterchangeVariantSetNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeVariantSetNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeVariantSetNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeVariantSetNode(UInterchangeVariantSetNode&&); \
	UInterchangeVariantSetNode(const UInterchangeVariantSetNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeVariantSetNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeVariantSetNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeVariantSetNode) \
	NO_API virtual ~UInterchangeVariantSetNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeVariantSetNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveCustomVariantSetUid); \
	DECLARE_FUNCTION(execAddCustomVariantSetUid); \
	DECLARE_FUNCTION(execGetCustomVariantSetUid); \
	DECLARE_FUNCTION(execGetCustomVariantSetUids); \
	DECLARE_FUNCTION(execGetCustomVariantSetUidCount);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneVariantSetsNode(); \
	friend struct Z_Construct_UClass_UInterchangeSceneVariantSetsNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSceneVariantSetsNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSceneVariantSetsNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_101_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeSceneVariantSetsNode(UInterchangeSceneVariantSetsNode&&); \
	UInterchangeSceneVariantSetsNode(const UInterchangeSceneVariantSetsNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSceneVariantSetsNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneVariantSetsNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSceneVariantSetsNode) \
	NO_API virtual ~UInterchangeSceneVariantSetsNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_98_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeSceneVariantSetsNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeVariantSetNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
