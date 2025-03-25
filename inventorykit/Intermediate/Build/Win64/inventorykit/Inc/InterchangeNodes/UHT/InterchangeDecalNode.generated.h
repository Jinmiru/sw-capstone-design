// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeDecalNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGENODES_InterchangeDecalNode_generated_h
#error "InterchangeDecalNode.generated.h already included, missing '#pragma once' in InterchangeDecalNode.h"
#endif
#define INTERCHANGENODES_InterchangeDecalNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomDecalMaterialPathName); \
	DECLARE_FUNCTION(execGetCustomDecalMaterialPathName); \
	DECLARE_FUNCTION(execSetCustomDecalSize); \
	DECLARE_FUNCTION(execGetCustomDecalSize); \
	DECLARE_FUNCTION(execSetCustomSortOrder); \
	DECLARE_FUNCTION(execGetCustomSortOrder);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDecalNode(); \
	friend struct Z_Construct_UClass_UInterchangeDecalNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDecalNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDecalNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDecalNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeDecalNode(UInterchangeDecalNode&&); \
	UInterchangeDecalNode(const UInterchangeDecalNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDecalNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDecalNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDecalNode) \
	NO_API virtual ~UInterchangeDecalNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_10_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeDecalNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
