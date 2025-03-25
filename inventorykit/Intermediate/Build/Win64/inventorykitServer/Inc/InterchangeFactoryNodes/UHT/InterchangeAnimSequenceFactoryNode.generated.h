// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeAnimSequenceFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
 struct FInterchangeAnimationPayLoadKey;
class UObject;
struct FSoftObjectPath;
#ifdef INTERCHANGEFACTORYNODES_InterchangeAnimSequenceFactoryNode_generated_h
#error "InterchangeAnimSequenceFactoryNode.generated.h already included, missing '#pragma once' in InterchangeAnimSequenceFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeAnimSequenceFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetAnimationPayloadKeysForMorphTargetNodeUids); \
	DECLARE_FUNCTION(execGetMorphTargetNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execSetAnimationPayloadKeysForSceneNodeUids); \
	DECLARE_FUNCTION(execGetSceneNodeAnimationPayloadKeys); \
	DECLARE_FUNCTION(execSetCustomSkeletonSoftObjectPath); \
	DECLARE_FUNCTION(execGetCustomSkeletonSoftObjectPath); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingNonCurveCustomAttributes); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingNonCurveCustomAttributes); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingCustomAttributeCurves); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingCustomAttributeCurves); \
	DECLARE_FUNCTION(execRemoveAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execSetAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveNames); \
	DECLARE_FUNCTION(execGetAnimatedAttributeStepCurveNamesCount); \
	DECLARE_FUNCTION(execRemoveAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execSetAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixe); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixes); \
	DECLARE_FUNCTION(execGetAnimatedMaterialCurveSuffixesCount); \
	DECLARE_FUNCTION(execSetCustomMaterialDriveParameterOnCustomAttribute); \
	DECLARE_FUNCTION(execGetCustomMaterialDriveParameterOnCustomAttribute); \
	DECLARE_FUNCTION(execRemoveAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execSetAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveName); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveNames); \
	DECLARE_FUNCTION(execGetAnimatedAttributeCurveNamesCount); \
	DECLARE_FUNCTION(execSetCustomDeleteExistingMorphTargetCurves); \
	DECLARE_FUNCTION(execGetCustomDeleteExistingMorphTargetCurves); \
	DECLARE_FUNCTION(execSetCustomRemoveCurveRedundantKeys); \
	DECLARE_FUNCTION(execGetCustomRemoveCurveRedundantKeys); \
	DECLARE_FUNCTION(execSetCustomAddCurveMetadataToSkeleton); \
	DECLARE_FUNCTION(execGetCustomAddCurveMetadataToSkeleton); \
	DECLARE_FUNCTION(execSetCustomDoNotImportCurveWithZero); \
	DECLARE_FUNCTION(execGetCustomDoNotImportCurveWithZero); \
	DECLARE_FUNCTION(execSetCustomImportAttributeCurves); \
	DECLARE_FUNCTION(execGetCustomImportAttributeCurves); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksRangeStop); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksRangeStop); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksRangeStart); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksRangeStart); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracksSampleRate); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracksSampleRate); \
	DECLARE_FUNCTION(execSetCustomImportBoneTracks); \
	DECLARE_FUNCTION(execGetCustomImportBoneTracks); \
	DECLARE_FUNCTION(execSetCustomSkeletonFactoryNodeUid); \
	DECLARE_FUNCTION(execGetCustomSkeletonFactoryNodeUid); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execInitializeAnimSequenceNode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_36_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeAnimSequenceFactoryNode, NO_API)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeAnimSequenceFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeAnimSequenceFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeAnimSequenceFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeAnimSequenceFactoryNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_36_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_36_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeAnimSequenceFactoryNode(UInterchangeAnimSequenceFactoryNode&&); \
	UInterchangeAnimSequenceFactoryNode(const UInterchangeAnimSequenceFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeAnimSequenceFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeAnimSequenceFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeAnimSequenceFactoryNode) \
	NO_API virtual ~UInterchangeAnimSequenceFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_33_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeAnimSequenceFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeAnimSequenceFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
