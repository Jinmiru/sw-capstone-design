// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeDecalMaterialNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERCHANGENODES_InterchangeDecalMaterialNode_generated_h
#error "InterchangeDecalMaterialNode.generated.h already included, missing '#pragma once' in InterchangeDecalMaterialNode.h"
#endif
#define INTERCHANGENODES_InterchangeDecalMaterialNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDecalMaterialNode(); \
	friend struct Z_Construct_UClass_UInterchangeDecalMaterialNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDecalMaterialNode, UInterchangeShaderNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDecalMaterialNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDecalMaterialNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeDecalMaterialNode(UInterchangeDecalMaterialNode&&); \
	UInterchangeDecalMaterialNode(const UInterchangeDecalMaterialNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDecalMaterialNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDecalMaterialNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDecalMaterialNode) \
	NO_API virtual ~UInterchangeDecalMaterialNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_13_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeDecalMaterialNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeDecalMaterialNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
