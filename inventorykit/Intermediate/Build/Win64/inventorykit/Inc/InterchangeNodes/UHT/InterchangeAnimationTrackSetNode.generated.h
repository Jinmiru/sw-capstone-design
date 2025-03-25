// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeAnimationTrackSetNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
enum class EInterchangeAnimationPayLoadType : uint8;
struct FInterchangeAnimationPayLoadKey;
#ifdef INTERCHANGENODES_InterchangeAnimationTrackSetNode_generated_h
#error "InterchangeAnimationTrackSetNode.generated.h already included, missing '#pragma once' in InterchangeAnimationTrackSetNode.h"
#endif
#define INTERCHANGENODES_InterchangeAnimationTrackSetNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeAnimationPayLoadKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INTERCHANGENODES_API UScriptStruct* StaticStruct<struct FInterchangeAnimationPayLoadKey>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomFrameRate); \
	DECLARE_FUNCTION(execSetCustomFrameRate); \
	DECLARE_FUNCTION(execRemoveCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execAddCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUids); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUidCount);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_92_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimationTrackSetNode(); \
	friend struct Z_Construct_UClass_UInterchangeAnimationTrackSetNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAnimationTrackSetNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAnimationTrackSetNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_92_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeAnimationTrackSetNode(UInterchangeAnimationTrackSetNode&&); \
	UInterchangeAnimationTrackSetNode(const UInterchangeAnimationTrackSetNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAnimationTrackSetNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimationTrackSetNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAnimationTrackSetNode) \
	NO_API virtual ~UInterchangeAnimationTrackSetNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_89_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_92_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_92_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_92_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_92_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeAnimationTrackSetNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomCompletionMode); \
	DECLARE_FUNCTION(execSetCustomCompletionMode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_165_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimationTrackBaseNode(); \
	friend struct Z_Construct_UClass_UInterchangeAnimationTrackBaseNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAnimationTrackBaseNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAnimationTrackBaseNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_165_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeAnimationTrackBaseNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeAnimationTrackBaseNode(UInterchangeAnimationTrackBaseNode&&); \
	UInterchangeAnimationTrackBaseNode(const UInterchangeAnimationTrackBaseNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAnimationTrackBaseNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimationTrackBaseNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAnimationTrackBaseNode) \
	NO_API virtual ~UInterchangeAnimationTrackBaseNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_162_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_165_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_165_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_165_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_165_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeAnimationTrackBaseNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomTrackSetDependencyUid); \
	DECLARE_FUNCTION(execSetCustomTrackSetDependencyUid); \
	DECLARE_FUNCTION(execGetCustomStartFrame); \
	DECLARE_FUNCTION(execSetCustomStartFrame); \
	DECLARE_FUNCTION(execGetCustomDuration); \
	DECLARE_FUNCTION(execSetCustomDuration); \
	DECLARE_FUNCTION(execGetCustomTimeScale); \
	DECLARE_FUNCTION(execSetCustomTimeScale);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_205_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimationTrackSetInstanceNode(); \
	friend struct Z_Construct_UClass_UInterchangeAnimationTrackSetInstanceNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAnimationTrackSetInstanceNode, UInterchangeAnimationTrackBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAnimationTrackSetInstanceNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_205_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeAnimationTrackSetInstanceNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeAnimationTrackSetInstanceNode(UInterchangeAnimationTrackSetInstanceNode&&); \
	UInterchangeAnimationTrackSetInstanceNode(const UInterchangeAnimationTrackSetInstanceNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAnimationTrackSetInstanceNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimationTrackSetInstanceNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAnimationTrackSetInstanceNode) \
	NO_API virtual ~UInterchangeAnimationTrackSetInstanceNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_202_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_205_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_205_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_205_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_205_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeAnimationTrackSetInstanceNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomFrameCount); \
	DECLARE_FUNCTION(execSetCustomFrameCount); \
	DECLARE_FUNCTION(execGetCustomAnimationPayloadKey); \
	DECLARE_FUNCTION(execSetCustomAnimationPayloadKey); \
	DECLARE_FUNCTION(execGetCustomPropertyTrack); \
	DECLARE_FUNCTION(execGetCustomTargetedProperty); \
	DECLARE_FUNCTION(execSetCustomPropertyTrack); \
	DECLARE_FUNCTION(execSetCustomTargetedProperty); \
	DECLARE_FUNCTION(execGetCustomActorDependencyUid); \
	DECLARE_FUNCTION(execSetCustomActorDependencyUid);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_284_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimationTrackNode(); \
	friend struct Z_Construct_UClass_UInterchangeAnimationTrackNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAnimationTrackNode, UInterchangeAnimationTrackBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAnimationTrackNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_284_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeAnimationTrackNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeAnimationTrackNode(UInterchangeAnimationTrackNode&&); \
	UInterchangeAnimationTrackNode(const UInterchangeAnimationTrackNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAnimationTrackNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimationTrackNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAnimationTrackNode) \
	NO_API virtual ~UInterchangeAnimationTrackNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_281_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_284_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_284_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_284_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_284_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeAnimationTrackNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_376_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomUsedChannels); \
	DECLARE_FUNCTION(execSetCustomUsedChannels);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_376_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeTransformAnimationTrackNode(); \
	friend struct Z_Construct_UClass_UInterchangeTransformAnimationTrackNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeTransformAnimationTrackNode, UInterchangeAnimationTrackNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeTransformAnimationTrackNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_376_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInterchangeTransformAnimationTrackNode(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeTransformAnimationTrackNode(UInterchangeTransformAnimationTrackNode&&); \
	UInterchangeTransformAnimationTrackNode(const UInterchangeTransformAnimationTrackNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeTransformAnimationTrackNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeTransformAnimationTrackNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeTransformAnimationTrackNode) \
	NO_API virtual ~UInterchangeTransformAnimationTrackNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_373_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_376_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_376_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_376_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_376_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeTransformAnimationTrackNode>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_433_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAnimationPayloadKeyForMorphTargetNodeUid); \
	DECLARE_FUNCTION(execGetMorphTargetNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execSetAnimationPayloadKeyForSceneNodeUid); \
	DECLARE_FUNCTION(execGetSceneNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execGetCustomAnimationStopTime); \
	DECLARE_FUNCTION(execSetCustomAnimationStopTime); \
	DECLARE_FUNCTION(execGetCustomAnimationStartTime); \
	DECLARE_FUNCTION(execSetCustomAnimationStartTime); \
	DECLARE_FUNCTION(execGetCustomAnimationSampleRate); \
	DECLARE_FUNCTION(execSetCustomAnimationSampleRate); \
	DECLARE_FUNCTION(execSetCustomSkeletonNodeUid); \
	DECLARE_FUNCTION(execGetCustomSkeletonNodeUid);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_433_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeSkeletalAnimationTrackNode, NO_API)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_433_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSkeletalAnimationTrackNode(); \
	friend struct Z_Construct_UClass_UInterchangeSkeletalAnimationTrackNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSkeletalAnimationTrackNode, UInterchangeAnimationTrackBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSkeletalAnimationTrackNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_433_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_433_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeSkeletalAnimationTrackNode(UInterchangeSkeletalAnimationTrackNode&&); \
	UInterchangeSkeletalAnimationTrackNode(const UInterchangeSkeletalAnimationTrackNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSkeletalAnimationTrackNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkeletalAnimationTrackNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSkeletalAnimationTrackNode) \
	NO_API virtual ~UInterchangeSkeletalAnimationTrackNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_430_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_433_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_433_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_433_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h_433_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeSkeletalAnimationTrackNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeAnimationTrackSetNode_h


#define FOREACH_ENUM_EINTERCHANGEANIMATIONPAYLOADTYPE(op) \
	op(EInterchangeAnimationPayLoadType::NONE) \
	op(EInterchangeAnimationPayLoadType::CURVE) \
	op(EInterchangeAnimationPayLoadType::MORPHTARGETCURVE) \
	op(EInterchangeAnimationPayLoadType::STEPCURVE) \
	op(EInterchangeAnimationPayLoadType::BAKED) \
	op(EInterchangeAnimationPayLoadType::MORPHTARGETCURVEWEIGHTINSTANCE) 

enum class EInterchangeAnimationPayLoadType : uint8;
template<> struct TIsUEnumClass<EInterchangeAnimationPayLoadType> { enum { Value = true }; };
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeAnimationPayLoadType>();

#define FOREACH_ENUM_EINTERCHANGEANIMATEDPROPERTY(op) \
	op(EInterchangeAnimatedProperty::None) \
	op(EInterchangeAnimatedProperty::Visibility) 

enum class EInterchangeAnimatedProperty : uint8;
template<> struct TIsUEnumClass<EInterchangeAnimatedProperty> { enum { Value = true }; };
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeAnimatedProperty>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
