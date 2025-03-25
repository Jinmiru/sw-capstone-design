// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeMeshNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
enum class EInterchangeMeshPayLoadType : uint8;
#ifdef INTERCHANGENODES_InterchangeMeshNode_generated_h
#error "InterchangeMeshNode.generated.h already included, missing '#pragma once' in InterchangeMeshNode.h"
#endif
#define INTERCHANGENODES_InterchangeMeshNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInterchangeMeshPayLoadKey_Statics; \
	static class UScriptStruct* StaticStruct();


template<> INTERCHANGENODES_API UScriptStruct* StaticStruct<struct FInterchangeMeshPayLoadKey>();

#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execSetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencyUid); \
	DECLARE_FUNCTION(execGetSlotMaterialDependencies); \
	DECLARE_FUNCTION(execRemoveSceneInstanceUid); \
	DECLARE_FUNCTION(execSetSceneInstanceUid); \
	DECLARE_FUNCTION(execGetSceneInstanceUid); \
	DECLARE_FUNCTION(execGetSceneInstanceUids); \
	DECLARE_FUNCTION(execGetSceneInstanceUidsCount); \
	DECLARE_FUNCTION(execRemoveMorphTargetDependencyUid); \
	DECLARE_FUNCTION(execSetMorphTargetDependencyUid); \
	DECLARE_FUNCTION(execGetMorphTargetDependency); \
	DECLARE_FUNCTION(execGetMorphTargetDependencies); \
	DECLARE_FUNCTION(execGetMorphTargetDependeciesCount); \
	DECLARE_FUNCTION(execRemoveSkeletonDependencyUid); \
	DECLARE_FUNCTION(execSetSkeletonDependencyUid); \
	DECLARE_FUNCTION(execGetSkeletonDependency); \
	DECLARE_FUNCTION(execGetSkeletonDependencies); \
	DECLARE_FUNCTION(execGetSkeletonDependeciesCount); \
	DECLARE_FUNCTION(execSetCustomUVCount); \
	DECLARE_FUNCTION(execGetCustomUVCount); \
	DECLARE_FUNCTION(execSetCustomHasVertexColor); \
	DECLARE_FUNCTION(execGetCustomHasVertexColor); \
	DECLARE_FUNCTION(execSetCustomHasSmoothGroup); \
	DECLARE_FUNCTION(execGetCustomHasSmoothGroup); \
	DECLARE_FUNCTION(execSetCustomHasVertexTangent); \
	DECLARE_FUNCTION(execGetCustomHasVertexTangent); \
	DECLARE_FUNCTION(execSetCustomHasVertexBinormal); \
	DECLARE_FUNCTION(execGetCustomHasVertexBinormal); \
	DECLARE_FUNCTION(execSetCustomHasVertexNormal); \
	DECLARE_FUNCTION(execGetCustomHasVertexNormal); \
	DECLARE_FUNCTION(execSetCustomBoundingBox); \
	DECLARE_FUNCTION(execGetCustomBoundingBox); \
	DECLARE_FUNCTION(execSetCustomPolygonCount); \
	DECLARE_FUNCTION(execGetCustomPolygonCount); \
	DECLARE_FUNCTION(execSetCustomVertexCount); \
	DECLARE_FUNCTION(execGetCustomVertexCount); \
	DECLARE_FUNCTION(execSetPayLoadKey); \
	DECLARE_FUNCTION(execSetMorphTargetName); \
	DECLARE_FUNCTION(execGetMorphTargetName); \
	DECLARE_FUNCTION(execSetMorphTarget); \
	DECLARE_FUNCTION(execIsMorphTarget); \
	DECLARE_FUNCTION(execSetSkinnedMesh); \
	DECLARE_FUNCTION(execIsSkinnedMesh);


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_68_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UInterchangeMeshNode, NO_API)


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeMeshNode(); \
	friend struct Z_Construct_UClass_UInterchangeMeshNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeMeshNode, UInterchangeBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeMeshNode) \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_68_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeMeshNode(UInterchangeMeshNode&&); \
	UInterchangeMeshNode(const UInterchangeMeshNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeMeshNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeMeshNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeMeshNode) \
	NO_API virtual ~UInterchangeMeshNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_65_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_68_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGENODES_API UClass* StaticClass<class UInterchangeMeshNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeMeshNode_h


#define FOREACH_ENUM_EINTERCHANGEMESHPAYLOADTYPE(op) \
	op(EInterchangeMeshPayLoadType::NONE) \
	op(EInterchangeMeshPayLoadType::STATIC) \
	op(EInterchangeMeshPayLoadType::SKELETAL) \
	op(EInterchangeMeshPayLoadType::MORPHTARGET) 

enum class EInterchangeMeshPayLoadType : uint8;
template<> struct TIsUEnumClass<EInterchangeMeshPayLoadType> { enum { Value = true }; };
template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeMeshPayLoadType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
