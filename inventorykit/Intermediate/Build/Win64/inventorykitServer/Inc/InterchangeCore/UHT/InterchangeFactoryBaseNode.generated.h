// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/InterchangeFactoryBaseNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EReimportStrategyFlags : uint8;
struct FSoftObjectPath;
#ifdef INTERCHANGECORE_InterchangeFactoryBaseNode_generated_h
#error "InterchangeFactoryBaseNode.generated.h already included, missing '#pragma once' in InterchangeFactoryBaseNode.h"
#endif
#define INTERCHANGECORE_InterchangeFactoryBaseNode_generated_h

#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnsetForceNodeReimport); \
	DECLARE_FUNCTION(execSetForceNodeReimport); \
	DECLARE_FUNCTION(execShouldForceNodeReimport); \
	DECLARE_FUNCTION(execSetCustomReferenceObject); \
	DECLARE_FUNCTION(execGetCustomReferenceObject); \
	DECLARE_FUNCTION(execRemoveFactoryDependencyUid); \
	DECLARE_FUNCTION(execAddFactoryDependencyUid); \
	DECLARE_FUNCTION(execGetFactoryDependency); \
	DECLARE_FUNCTION(execGetFactoryDependencies); \
	DECLARE_FUNCTION(execGetFactoryDependenciesCount); \
	DECLARE_FUNCTION(execSetCustomSubPath); \
	DECLARE_FUNCTION(execGetCustomSubPath); \
	DECLARE_FUNCTION(execUnsetSkipNodeImport); \
	DECLARE_FUNCTION(execSetSkipNodeImport); \
	DECLARE_FUNCTION(execShouldSkipNodeImport); \
	DECLARE_FUNCTION(execSetReimportStrategyFlags); \
	DECLARE_FUNCTION(execGetReimportStrategyFlags);


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_162_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFactoryBaseNode(); \
	friend struct Z_Construct_UClass_UInterchangeFactoryBaseNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeFactoryBaseNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeCore"), INTERCHANGECORE_API) \
	DECLARE_SERIALIZER(UInterchangeFactoryBaseNode)


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_162_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeFactoryBaseNode(UInterchangeFactoryBaseNode&&); \
	UInterchangeFactoryBaseNode(const UInterchangeFactoryBaseNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INTERCHANGECORE_API, UInterchangeFactoryBaseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFactoryBaseNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeFactoryBaseNode) \
	INTERCHANGECORE_API virtual ~UInterchangeFactoryBaseNode();


#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_159_PROLOG
#define FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_162_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_162_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_162_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h_162_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGECORE_API UClass* StaticClass<class UInterchangeFactoryBaseNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Interchange_Core_Public_Nodes_InterchangeFactoryBaseNode_h


#define FOREACH_ENUM_EREIMPORTSTRATEGYFLAGS(op) \
	op(EReimportStrategyFlags::ApplyNoProperties) \
	op(EReimportStrategyFlags::ApplyPipelineProperties) \
	op(EReimportStrategyFlags::ApplyEditorChangedProperties) 

enum class EReimportStrategyFlags : uint8;
template<> struct TIsUEnumClass<EReimportStrategyFlags> { enum { Value = true }; };
template<> INTERCHANGECORE_API UEnum* StaticEnum<EReimportStrategyFlags>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
