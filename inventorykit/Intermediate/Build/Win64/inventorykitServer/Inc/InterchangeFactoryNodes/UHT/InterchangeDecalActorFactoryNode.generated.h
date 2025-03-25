// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeDecalActorFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef INTERCHANGEFACTORYNODES_InterchangeDecalActorFactoryNode_generated_h
#error "InterchangeDecalActorFactoryNode.generated.h already included, missing '#pragma once' in InterchangeDecalActorFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeDecalActorFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomDecalMaterialPathName); \
	DECLARE_FUNCTION(execGetCustomDecalMaterialPathName); \
	DECLARE_FUNCTION(execSetCustomDecalSize); \
	DECLARE_FUNCTION(execGetCustomDecalSize); \
	DECLARE_FUNCTION(execSetCustomSortOrder); \
	DECLARE_FUNCTION(execGetCustomSortOrder); \
	DECLARE_FUNCTION(execGetObjectClass);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDecalActorFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeDecalActorFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDecalActorFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDecalActorFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDecalActorFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeDecalActorFactoryNode(UInterchangeDecalActorFactoryNode&&); \
	UInterchangeDecalActorFactoryNode(const UInterchangeDecalActorFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDecalActorFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDecalActorFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDecalActorFactoryNode) \
	NO_API virtual ~UInterchangeDecalActorFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_9_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeDecalActorFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalActorFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
