// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSceneVariantSetsFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef INTERCHANGEFACTORYNODES_InterchangeSceneVariantSetsFactoryNode_generated_h
#error "InterchangeSceneVariantSetsFactoryNode.generated.h already included, missing '#pragma once' in InterchangeSceneVariantSetsFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeSceneVariantSetsFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveCustomVariantSetUid); \
	DECLARE_FUNCTION(execAddCustomVariantSetUid); \
	DECLARE_FUNCTION(execGetCustomVariantSetUid); \
	DECLARE_FUNCTION(execGetCustomVariantSetUids); \
	DECLARE_FUNCTION(execGetCustomVariantSetUidCount); \
	DECLARE_FUNCTION(execGetObjectClass);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSceneVariantSetsFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeSceneVariantSetsFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSceneVariantSetsFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSceneVariantSetsFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeSceneVariantSetsFactoryNode(UInterchangeSceneVariantSetsFactoryNode&&); \
	UInterchangeSceneVariantSetsFactoryNode(const UInterchangeSceneVariantSetsFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSceneVariantSetsFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSceneVariantSetsFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSceneVariantSetsFactoryNode) \
	NO_API virtual ~UInterchangeSceneVariantSetsFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_10_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeSceneVariantSetsFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSceneVariantSetsFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
