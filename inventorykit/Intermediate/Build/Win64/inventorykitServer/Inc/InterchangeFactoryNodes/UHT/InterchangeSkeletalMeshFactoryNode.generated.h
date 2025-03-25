// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeSkeletalMeshFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EInterchangeSkeletalMeshContentType : uint8;
struct FSoftObjectPath;
#ifdef INTERCHANGEFACTORYNODES_InterchangeSkeletalMeshFactoryNode_generated_h
#error "InterchangeSkeletalMeshFactoryNode.generated.h already included, missing '#pragma once' in InterchangeSkeletalMeshFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeSkeletalMeshFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetCustomBoneInfluenceLimit); \
	DECLARE_FUNCTION(execGetCustomBoneInfluenceLimit); \
	DECLARE_FUNCTION(execSetCustomMorphThresholdPosition); \
	DECLARE_FUNCTION(execGetCustomMorphThresholdPosition); \
	DECLARE_FUNCTION(execSetCustomThresholdUV); \
	DECLARE_FUNCTION(execGetCustomThresholdUV); \
	DECLARE_FUNCTION(execSetCustomThresholdTangentNormal); \
	DECLARE_FUNCTION(execGetCustomThresholdTangentNormal); \
	DECLARE_FUNCTION(execSetCustomThresholdPosition); \
	DECLARE_FUNCTION(execGetCustomThresholdPosition); \
	DECLARE_FUNCTION(execSetCustomUseHighPrecisionSkinWeights); \
	DECLARE_FUNCTION(execGetCustomUseHighPrecisionSkinWeights); \
	DECLARE_FUNCTION(execSetCustomImportContentType); \
	DECLARE_FUNCTION(execGetCustomImportContentType); \
	DECLARE_FUNCTION(execSetCustomPhysicAssetSoftObjectPath); \
	DECLARE_FUNCTION(execGetCustomPhysicAssetSoftObjectPath); \
	DECLARE_FUNCTION(execSetCustomCreatePhysicsAsset); \
	DECLARE_FUNCTION(execGetCustomCreatePhysicsAsset); \
	DECLARE_FUNCTION(execSetCustomImportVertexAttributes); \
	DECLARE_FUNCTION(execGetCustomImportVertexAttributes); \
	DECLARE_FUNCTION(execSetCustomImportMorphTarget); \
	DECLARE_FUNCTION(execGetCustomImportMorphTarget); \
	DECLARE_FUNCTION(execSetCustomSkeletonSoftObjectPath); \
	DECLARE_FUNCTION(execGetCustomSkeletonSoftObjectPath); \
	DECLARE_FUNCTION(execGetObjectClass); \
	DECLARE_FUNCTION(execInitializeSkeletalMeshNode);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeSkeletalMeshFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeSkeletalMeshFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeSkeletalMeshFactoryNode, UInterchangeMeshFactoryNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeSkeletalMeshFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeSkeletalMeshFactoryNode(UInterchangeSkeletalMeshFactoryNode&&); \
	UInterchangeSkeletalMeshFactoryNode(const UInterchangeSkeletalMeshFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeSkeletalMeshFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeSkeletalMeshFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeSkeletalMeshFactoryNode) \
	NO_API virtual ~UInterchangeSkeletalMeshFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_24_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeSkeletalMeshFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeSkeletalMeshFactoryNode_h


#define FOREACH_ENUM_EINTERCHANGESKELETALMESHCONTENTTYPE(op) \
	op(EInterchangeSkeletalMeshContentType::All) \
	op(EInterchangeSkeletalMeshContentType::Geometry) \
	op(EInterchangeSkeletalMeshContentType::SkinningWeights) 

enum class EInterchangeSkeletalMeshContentType : uint8;
template<> struct TIsUEnumClass<EInterchangeSkeletalMeshContentType> { enum { Value = true }; };
template<> INTERCHANGEFACTORYNODES_API UEnum* StaticEnum<EInterchangeSkeletalMeshContentType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
