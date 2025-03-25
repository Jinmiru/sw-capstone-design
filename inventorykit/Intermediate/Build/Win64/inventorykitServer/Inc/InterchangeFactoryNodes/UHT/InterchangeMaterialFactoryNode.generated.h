// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMaterialFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef INTERCHANGEFACTORYNODES_InterchangeMaterialFactoryNode_generated_h
#error "InterchangeMaterialFactoryNode.generated.h already included, missing '#pragma once' in InterchangeMaterialFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeMaterialFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomIsMaterialImportEnabled); \
	DECLARE_FUNCTION(execGetCustomIsMaterialImportEnabled);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeBaseMaterialFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeBaseMaterialFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeBaseMaterialFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeBaseMaterialFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeBaseMaterialFactoryNode(UInterchangeBaseMaterialFactoryNode&&); \
	UInterchangeBaseMaterialFactoryNode(const UInterchangeBaseMaterialFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeBaseMaterialFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseMaterialFactoryNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInterchangeBaseMaterialFactoryNode) \
	NO_API virtual ~UInterchangeBaseMaterialFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_16_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeBaseMaterialFactoryNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomScreenSpaceReflections); \
	DECLARE_FUNCTION(execGetCustomScreenSpaceReflections); \
	DECLARE_FUNCTION(execSetCustomRefractionMethod); \
	DECLARE_FUNCTION(execGetCustomRefractionMethod); \
	DECLARE_FUNCTION(execSetCustomOpacityMaskClipValue); \
	DECLARE_FUNCTION(execGetCustomOpacityMaskClipValue); \
	DECLARE_FUNCTION(execSetCustomTwoSided); \
	DECLARE_FUNCTION(execGetCustomTwoSided); \
	DECLARE_FUNCTION(execSetCustomBlendMode); \
	DECLARE_FUNCTION(execGetCustomBlendMode); \
	DECLARE_FUNCTION(execSetCustomTranslucencyLightingMode); \
	DECLARE_FUNCTION(execGetCustomTranslucencyLightingMode); \
	DECLARE_FUNCTION(execSetCustomShadingModel); \
	DECLARE_FUNCTION(execGetCustomShadingModel); \
	DECLARE_FUNCTION(execConnectOutputToCloth); \
	DECLARE_FUNCTION(execConnectToCloth); \
	DECLARE_FUNCTION(execGetClothConnection); \
	DECLARE_FUNCTION(execConnectOutputToFuzzColor); \
	DECLARE_FUNCTION(execConnectToFuzzColor); \
	DECLARE_FUNCTION(execGetFuzzColorConnection); \
	DECLARE_FUNCTION(execConnectOutputToTransmissionColor); \
	DECLARE_FUNCTION(execConnectToTransmissionColor); \
	DECLARE_FUNCTION(execGetTransmissionColorConnection); \
	DECLARE_FUNCTION(execConnectOutputToClearCoatNormal); \
	DECLARE_FUNCTION(execConnectToClearCoatNormal); \
	DECLARE_FUNCTION(execGetClearCoatNormalConnection); \
	DECLARE_FUNCTION(execConnectOutputToClearCoatRoughness); \
	DECLARE_FUNCTION(execConnectToClearCoatRoughness); \
	DECLARE_FUNCTION(execGetClearCoatRoughnessConnection); \
	DECLARE_FUNCTION(execConnectOutputToClearCoat); \
	DECLARE_FUNCTION(execConnectToClearCoat); \
	DECLARE_FUNCTION(execGetClearCoatConnection); \
	DECLARE_FUNCTION(execConnectOutputToRefraction); \
	DECLARE_FUNCTION(execConnectToRefraction); \
	DECLARE_FUNCTION(execGetRefractionConnection); \
	DECLARE_FUNCTION(execConnectOutputToOcclusion); \
	DECLARE_FUNCTION(execConnectToOcclusion); \
	DECLARE_FUNCTION(execGetOcclusionConnection); \
	DECLARE_FUNCTION(execConnectOutputToOpacity); \
	DECLARE_FUNCTION(execConnectToOpacity); \
	DECLARE_FUNCTION(execGetOpacityConnection); \
	DECLARE_FUNCTION(execConnectOutputToSubsurface); \
	DECLARE_FUNCTION(execConnectToSubsurface); \
	DECLARE_FUNCTION(execGetSubsurfaceConnection); \
	DECLARE_FUNCTION(execConnectOutputToTangent); \
	DECLARE_FUNCTION(execConnectToTangent); \
	DECLARE_FUNCTION(execGetTangentConnection); \
	DECLARE_FUNCTION(execConnectOutputToNormal); \
	DECLARE_FUNCTION(execConnectToNormal); \
	DECLARE_FUNCTION(execGetNormalConnection); \
	DECLARE_FUNCTION(execConnectOutputToEmissiveColor); \
	DECLARE_FUNCTION(execConnectToEmissiveColor); \
	DECLARE_FUNCTION(execGetEmissiveColorConnection); \
	DECLARE_FUNCTION(execConnectOutputToAnisotropy); \
	DECLARE_FUNCTION(execConnectToAnisotropy); \
	DECLARE_FUNCTION(execGetAnisotropyConnection); \
	DECLARE_FUNCTION(execConnectOutputToRoughness); \
	DECLARE_FUNCTION(execConnectToRoughness); \
	DECLARE_FUNCTION(execGetRoughnessConnection); \
	DECLARE_FUNCTION(execConnectOutputToSpecular); \
	DECLARE_FUNCTION(execConnectToSpecular); \
	DECLARE_FUNCTION(execGetSpecularConnection); \
	DECLARE_FUNCTION(execConnectOutputToMetallic); \
	DECLARE_FUNCTION(execConnectToMetallic); \
	DECLARE_FUNCTION(execGetMetallicConnection); \
	DECLARE_FUNCTION(execConnectOutputToBaseColor); \
	DECLARE_FUNCTION(execConnectToBaseColor); \
	DECLARE_FUNCTION(execGetBaseColorConnection); \
	DECLARE_FUNCTION(execGetObjectClass);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeMaterialFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeMaterialFactoryNode, UInterchangeBaseMaterialFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeMaterialFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeMaterialFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeMaterialFactoryNode(UInterchangeMaterialFactoryNode&&); \
	UInterchangeMaterialFactoryNode(const UInterchangeMaterialFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeMaterialFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialFactoryNode) \
	NO_API virtual ~UInterchangeMaterialFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_35_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_38_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeMaterialFactoryNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_269_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomExpressionClassName); \
	DECLARE_FUNCTION(execGetCustomExpressionClassName);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_269_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialExpressionFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeMaterialExpressionFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeMaterialExpressionFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_269_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeMaterialExpressionFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeMaterialExpressionFactoryNode(UInterchangeMaterialExpressionFactoryNode&&); \
	UInterchangeMaterialExpressionFactoryNode(const UInterchangeMaterialExpressionFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeMaterialExpressionFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialExpressionFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialExpressionFactoryNode) \
	NO_API virtual ~UInterchangeMaterialExpressionFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_266_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_269_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_269_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_269_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_269_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeMaterialExpressionFactoryNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_289_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomParent); \
	DECLARE_FUNCTION(execGetCustomParent); \
	DECLARE_FUNCTION(execSetCustomInstanceClassName); \
	DECLARE_FUNCTION(execGetCustomInstanceClassName);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_289_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialInstanceFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeMaterialInstanceFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeMaterialInstanceFactoryNode, UInterchangeBaseMaterialFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeMaterialInstanceFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_289_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeMaterialInstanceFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeMaterialInstanceFactoryNode(UInterchangeMaterialInstanceFactoryNode&&); \
	UInterchangeMaterialInstanceFactoryNode(const UInterchangeMaterialInstanceFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeMaterialInstanceFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialInstanceFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialInstanceFactoryNode) \
	NO_API virtual ~UInterchangeMaterialInstanceFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_286_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_289_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_289_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_289_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_289_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeMaterialInstanceFactoryNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_317_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomMaterialFunctionDependency); \
	DECLARE_FUNCTION(execGetCustomMaterialFunctionDependency);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_317_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialFunctionCallExpressionFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeMaterialFunctionCallExpressionFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeMaterialFunctionCallExpressionFactoryNode, UInterchangeMaterialExpressionFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeMaterialFunctionCallExpressionFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_317_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeMaterialFunctionCallExpressionFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeMaterialFunctionCallExpressionFactoryNode(UInterchangeMaterialFunctionCallExpressionFactoryNode&&); \
	UInterchangeMaterialFunctionCallExpressionFactoryNode(const UInterchangeMaterialFunctionCallExpressionFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeMaterialFunctionCallExpressionFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialFunctionCallExpressionFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialFunctionCallExpressionFactoryNode) \
	NO_API virtual ~UInterchangeMaterialFunctionCallExpressionFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_314_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_317_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_317_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_317_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_317_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeMaterialFunctionCallExpressionFactoryNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_343_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputConnection); \
	DECLARE_FUNCTION(execGetObjectClass);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_343_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMaterialFunctionFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeMaterialFunctionFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeMaterialFunctionFactoryNode, UInterchangeBaseMaterialFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeMaterialFunctionFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_343_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeMaterialFunctionFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeMaterialFunctionFactoryNode(UInterchangeMaterialFunctionFactoryNode&&); \
	UInterchangeMaterialFunctionFactoryNode(const UInterchangeMaterialFunctionFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeMaterialFunctionFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMaterialFunctionFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMaterialFunctionFactoryNode) \
	NO_API virtual ~UInterchangeMaterialFunctionFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_340_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_343_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_343_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_343_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h_343_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeMaterialFunctionFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeMaterialFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
