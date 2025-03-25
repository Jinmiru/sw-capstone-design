// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeCommonPipelineDataFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNodeContainer;
#ifdef INTERCHANGEFACTORYNODES_InterchangeCommonPipelineDataFactoryNode_generated_h
#error "InterchangeCommonPipelineDataFactoryNode.generated.h already included, missing '#pragma once' in InterchangeCommonPipelineDataFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeCommonPipelineDataFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBakeMeshes); \
	DECLARE_FUNCTION(execGetBakeMeshes); \
	DECLARE_FUNCTION(execSetCustomGlobalOffsetTransform); \
	DECLARE_FUNCTION(execGetCustomGlobalOffsetTransform);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeCommonPipelineDataFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeCommonPipelineDataFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeCommonPipelineDataFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeCommonPipelineDataFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeCommonPipelineDataFactoryNode(UInterchangeCommonPipelineDataFactoryNode&&); \
	UInterchangeCommonPipelineDataFactoryNode(const UInterchangeCommonPipelineDataFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeCommonPipelineDataFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeCommonPipelineDataFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeCommonPipelineDataFactoryNode) \
	NO_API virtual ~UInterchangeCommonPipelineDataFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeCommonPipelineDataFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeCommonPipelineDataFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
