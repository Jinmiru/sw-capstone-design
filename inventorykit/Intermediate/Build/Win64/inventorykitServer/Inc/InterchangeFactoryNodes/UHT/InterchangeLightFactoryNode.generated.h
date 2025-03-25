// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeLightFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELightUnits : uint8;
struct FColor;
#ifdef INTERCHANGEFACTORYNODES_InterchangeLightFactoryNode_generated_h
#error "InterchangeLightFactoryNode.generated.h already included, missing '#pragma once' in InterchangeLightFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeLightFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomUseTemperature); \
	DECLARE_FUNCTION(execGetCustomUseTemperature); \
	DECLARE_FUNCTION(execSetCustomTemperature); \
	DECLARE_FUNCTION(execGetCustomTemperature); \
	DECLARE_FUNCTION(execSetCustomIntensity); \
	DECLARE_FUNCTION(execGetCustomIntensity); \
	DECLARE_FUNCTION(execSetCustomLightColor); \
	DECLARE_FUNCTION(execGetCustomLightColor);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeBaseLightFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeBaseLightFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeBaseLightFactoryNode, UInterchangeActorFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeBaseLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeBaseLightFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeBaseLightFactoryNode(UInterchangeBaseLightFactoryNode&&); \
	UInterchangeBaseLightFactoryNode(const UInterchangeBaseLightFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeBaseLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeBaseLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeBaseLightFactoryNode) \
	NO_API virtual ~UInterchangeBaseLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_10_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeBaseLightFactoryNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_54_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeDirectionalLightFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeDirectionalLightFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeDirectionalLightFactoryNode, UInterchangeBaseLightFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeDirectionalLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_54_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeDirectionalLightFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeDirectionalLightFactoryNode(UInterchangeDirectionalLightFactoryNode&&); \
	UInterchangeDirectionalLightFactoryNode(const UInterchangeDirectionalLightFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeDirectionalLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeDirectionalLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeDirectionalLightFactoryNode) \
	NO_API virtual ~UInterchangeDirectionalLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_51_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_54_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_54_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeDirectionalLightFactoryNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomRotation); \
	DECLARE_FUNCTION(execGetCustomRotation); \
	DECLARE_FUNCTION(execSetCustomIESBrightnessScale); \
	DECLARE_FUNCTION(execGetCustomIESBrightnessScale); \
	DECLARE_FUNCTION(execSetCustomUseIESBrightness); \
	DECLARE_FUNCTION(execGetCustomUseIESBrightness); \
	DECLARE_FUNCTION(execSetCustomIESTexture); \
	DECLARE_FUNCTION(execGetCustomIESTexture); \
	DECLARE_FUNCTION(execSetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execGetCustomAttenuationRadius); \
	DECLARE_FUNCTION(execSetCustomIntensityUnits); \
	DECLARE_FUNCTION(execGetCustomIntensityUnits);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLightFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeLightFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeLightFactoryNode, UInterchangeBaseLightFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_60_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeLightFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeLightFactoryNode(UInterchangeLightFactoryNode&&); \
	UInterchangeLightFactoryNode(const UInterchangeLightFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeLightFactoryNode) \
	NO_API virtual ~UInterchangeLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_57_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_60_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeLightFactoryNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomSourceHeight); \
	DECLARE_FUNCTION(execGetCustomSourceHeight); \
	DECLARE_FUNCTION(execSetCustomSourceWidth); \
	DECLARE_FUNCTION(execGetCustomSourceWidth);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeRectLightFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeRectLightFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeRectLightFactoryNode, UInterchangeLightFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeRectLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeRectLightFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeRectLightFactoryNode(UInterchangeRectLightFactoryNode&&); \
	UInterchangeRectLightFactoryNode(const UInterchangeRectLightFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeRectLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeRectLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeRectLightFactoryNode) \
	NO_API virtual ~UInterchangeRectLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_112_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_115_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeRectLightFactoryNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execGetCustomLightFalloffExponent); \
	DECLARE_FUNCTION(execSetCustomUseInverseSquaredFalloff); \
	DECLARE_FUNCTION(execGetCustomUseInverseSquaredFalloff);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_142_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangePointLightFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangePointLightFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangePointLightFactoryNode, UInterchangeLightFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangePointLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_142_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangePointLightFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangePointLightFactoryNode(UInterchangePointLightFactoryNode&&); \
	UInterchangePointLightFactoryNode(const UInterchangePointLightFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangePointLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangePointLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangePointLightFactoryNode) \
	NO_API virtual ~UInterchangePointLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_139_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_142_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_142_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_142_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_142_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangePointLightFactoryNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execGetCustomOuterConeAngle); \
	DECLARE_FUNCTION(execSetCustomInnerConeAngle); \
	DECLARE_FUNCTION(execGetCustomInnerConeAngle);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_167_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSpotLightFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeSpotLightFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSpotLightFactoryNode, UInterchangePointLightFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSpotLightFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_167_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeSpotLightFactoryNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeSpotLightFactoryNode(UInterchangeSpotLightFactoryNode&&); \
	UInterchangeSpotLightFactoryNode(const UInterchangeSpotLightFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSpotLightFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSpotLightFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSpotLightFactoryNode) \
	NO_API virtual ~UInterchangeSpotLightFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_164_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_167_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_167_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_167_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h_167_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeSpotLightFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLightFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
