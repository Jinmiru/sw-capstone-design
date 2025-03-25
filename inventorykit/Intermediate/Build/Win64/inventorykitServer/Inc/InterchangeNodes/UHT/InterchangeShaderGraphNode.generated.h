// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeShaderGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterchangeBaseNode;
struct FLinearColor;
#ifdef INTERCHANGENODES_InterchangeShaderGraphNode_generated_h
#error "InterchangeShaderGraphNode.generated.h already included, missing '#pragma once' in InterchangeShaderGraphNode.h"
#endif
#define INTERCHANGENODES_InterchangeShaderGraphNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputConnection); \
	DECLARE_FUNCTION(execConnectOuputToInputByIndex); \
	DECLARE_FUNCTION(execConnectOuputToInputByName); \
	DECLARE_FUNCTION(execConnectDefaultOuputToInput); \
	DECLARE_FUNCTION(execGatherInputs); \
	DECLARE_FUNCTION(execHasParameter); \
	DECLARE_FUNCTION(execHasInput); \
	DECLARE_FUNCTION(execIsAParameter); \
	DECLARE_FUNCTION(execIsAnInput); \
	DECLARE_FUNCTION(execMakeInputName); \
	DECLARE_FUNCTION(execMakeInputParameterKey); \
	DECLARE_FUNCTION(execMakeInputValueKey); \
	DECLARE_FUNCTION(execMakeInputConnectionKey);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeShaderPortsAPI(); \
	friend struct Z_Construct_UClass_UInterchangeShaderPortsAPI_Statics; \
public: \
	DECLARE_CLASS(UInterchangeShaderPortsAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeShaderPortsAPI)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeShaderPortsAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeShaderPortsAPI(UInterchangeShaderPortsAPI&&); \
	UInterchangeShaderPortsAPI(const UInterchangeShaderPortsAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeShaderPortsAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeShaderPortsAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterchangeShaderPortsAPI) \
	NO_API virtual ~UInterchangeShaderPortsAPI();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_16_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeShaderPortsAPI>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomShaderType); \
	DECLARE_FUNCTION(execGetCustomShaderType); \
	DECLARE_FUNCTION(execAddStringInput); \
	DECLARE_FUNCTION(execAddLinearColorInput); \
	DECLARE_FUNCTION(execAddFloatInput);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_146_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeShaderNode(); \
	friend struct Z_Construct_UClass_UInterchangeShaderNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeShaderNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeShaderNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_146_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeShaderNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeShaderNode(UInterchangeShaderNode&&); \
	UInterchangeShaderNode(const UInterchangeShaderNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeShaderNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeShaderNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeShaderNode) \
	NO_API virtual ~UInterchangeShaderNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_143_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_146_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_146_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_146_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_146_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeShaderNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_208_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomMaterialFunction); \
	DECLARE_FUNCTION(execGetCustomMaterialFunction);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_208_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeFunctionCallShaderNode(); \
	friend struct Z_Construct_UClass_UInterchangeFunctionCallShaderNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeFunctionCallShaderNode, UInterchangeShaderNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeFunctionCallShaderNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_208_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeFunctionCallShaderNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeFunctionCallShaderNode(UInterchangeFunctionCallShaderNode&&); \
	UInterchangeFunctionCallShaderNode(const UInterchangeFunctionCallShaderNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeFunctionCallShaderNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeFunctionCallShaderNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeFunctionCallShaderNode) \
	NO_API virtual ~UInterchangeFunctionCallShaderNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_205_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_208_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_208_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_208_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_208_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeFunctionCallShaderNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_233_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomBlendMode); \
	DECLARE_FUNCTION(execGetCustomBlendMode); \
	DECLARE_FUNCTION(execSetCustomScreenSpaceReflections); \
	DECLARE_FUNCTION(execGetCustomScreenSpaceReflections); \
	DECLARE_FUNCTION(execSetCustomIsAShaderFunction); \
	DECLARE_FUNCTION(execGetCustomIsAShaderFunction); \
	DECLARE_FUNCTION(execSetCustomOpacityMaskClipValue); \
	DECLARE_FUNCTION(execGetCustomOpacityMaskClipValue); \
	DECLARE_FUNCTION(execSetCustomTwoSidedTransmission); \
	DECLARE_FUNCTION(execGetCustomTwoSidedTransmission); \
	DECLARE_FUNCTION(execSetCustomTwoSided); \
	DECLARE_FUNCTION(execGetCustomTwoSided);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_233_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeShaderGraphNode(); \
	friend struct Z_Construct_UClass_UInterchangeShaderGraphNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeShaderGraphNode, UInterchangeShaderNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeShaderGraphNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_233_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeShaderGraphNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeShaderGraphNode(UInterchangeShaderGraphNode&&); \
	UInterchangeShaderGraphNode(const UInterchangeShaderGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeShaderGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeShaderGraphNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeShaderGraphNode) \
	NO_API virtual ~UInterchangeShaderGraphNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_230_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_233_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_233_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_233_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h_233_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeShaderGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeShaderGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
