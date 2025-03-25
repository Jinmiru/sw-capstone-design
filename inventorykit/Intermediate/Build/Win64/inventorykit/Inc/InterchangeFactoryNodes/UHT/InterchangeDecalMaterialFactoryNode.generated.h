// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeDecalMaterialFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef INTERCHANGEFACTORYNODES_InterchangeDecalMaterialFactoryNode_generated_h
#error "InterchangeDecalMaterialFactoryNode.generated.h already included, missing '#pragma once' in InterchangeDecalMaterialFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeDecalMaterialFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomNormalTexturePath); \
	DECLARE_FUNCTION(execGetCustomNormalTexturePath); \
	DECLARE_FUNCTION(execSetCustomDiffuseTexturePath); \
	DECLARE_FUNCTION(execGetCustomDiffuseTexturePath); \
	DECLARE_FUNCTION(execGetObjectClass);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDecalMaterialFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeDecalMaterialFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDecalMaterialFactoryNode, UInterchangeBaseMaterialFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDecalMaterialFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDecalMaterialFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeDecalMaterialFactoryNode(UInterchangeDecalMaterialFactoryNode&&); \
	UInterchangeDecalMaterialFactoryNode(const UInterchangeDecalMaterialFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDecalMaterialFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDecalMaterialFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDecalMaterialFactoryNode) \
	NO_API virtual ~UInterchangeDecalMaterialFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_10_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeDecalMaterialFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeDecalMaterialFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
