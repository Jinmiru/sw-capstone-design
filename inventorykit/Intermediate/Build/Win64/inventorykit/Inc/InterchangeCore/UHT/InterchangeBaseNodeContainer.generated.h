// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/InterchangeBaseNodeContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNode;
class UInterchangeFactoryBaseNode;
class UObject;
#ifdef INTERCHANGECORE_InterchangeBaseNodeContainer_generated_h
#error "InterchangeBaseNodeContainer.generated.h already included, missing '#pragma once' in InterchangeBaseNodeContainer.h"
#endif
#define INTERCHANGECORE_InterchangeBaseNodeContainer_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetChildrenCache); \
	DECLARE_FUNCTION(execComputeChildrenCache); \
	DECLARE_FUNCTION(execLoadFromFile); \
	DECLARE_FUNCTION(execSaveToFile); \
	DECLARE_FUNCTION(execGetNodeChildren); \
	DECLARE_FUNCTION(execGetNodeChildrenUids); \
	DECLARE_FUNCTION(execGetNodeChildrenCount); \
	DECLARE_FUNCTION(execSetNodeParentUid); \
	DECLARE_FUNCTION(execGetFactoryNode); \
	DECLARE_FUNCTION(execGetNode); \
	DECLARE_FUNCTION(execGetNodes); \
	DECLARE_FUNCTION(execGetRoots); \
	DECLARE_FUNCTION(execIsNodeUidValid); \
	DECLARE_FUNCTION(execReplaceNode); \
	DECLARE_FUNCTION(execAddNode); \
	DECLARE_FUNCTION(execReset);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeBaseNodeContainer(); \
	friend struct Z_Construct_UClass_UInterchangeBaseNodeContainer_Statics; \
public: \
	DECLARE_CLASS(UInterchangeBaseNodeContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), INTERCHANGECORE_API) \
	DECLARE_SERIALIZER(UInterchangeBaseNodeContainer)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeBaseNodeContainer(UInterchangeBaseNodeContainer&&); \
	UInterchangeBaseNodeContainer(const UInterchangeBaseNodeContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeBaseNodeContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseNodeContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeBaseNodeContainer) \
	INTERCHANGECORE_API virtual ~UInterchangeBaseNodeContainer();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_37_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_40_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeBaseNodeContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeBaseNodeContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
