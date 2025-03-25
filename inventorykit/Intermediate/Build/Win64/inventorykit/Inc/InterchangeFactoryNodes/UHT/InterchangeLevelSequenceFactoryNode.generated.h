// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InterchangeLevelSequenceFactoryNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef INTERCHANGEFACTORYNODES_InterchangeLevelSequenceFactoryNode_generated_h
#error "InterchangeLevelSequenceFactoryNode.generated.h already included, missing '#pragma once' in InterchangeLevelSequenceFactoryNode.h"
#endif
#define INTERCHANGEFACTORYNODES_InterchangeLevelSequenceFactoryNode_generated_h

#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomFrameRate); \
	DECLARE_FUNCTION(execSetCustomFrameRate); \
	DECLARE_FUNCTION(execRemoveCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execAddCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUid); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUids); \
	DECLARE_FUNCTION(execGetCustomAnimationTrackUidCount); \
	DECLARE_FUNCTION(execGetObjectClass);


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInterchangeLevelSequenceFactoryNode(); \
	friend struct Z_Construct_UClass_UInterchangeLevelSequenceFactoryNode_Statics; \
public: \
	DECLARE_CLASS(UInterchangeLevelSequenceFactoryNode, UInterchangeFactoryBaseNode, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InterchangeFactoryNodes"), NO_API) \
	DECLARE_SERIALIZER(UInterchangeLevelSequenceFactoryNode)


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInterchangeLevelSequenceFactoryNode(UInterchangeLevelSequenceFactoryNode&&); \
	UInterchangeLevelSequenceFactoryNode(const UInterchangeLevelSequenceFactoryNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInterchangeLevelSequenceFactoryNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterchangeLevelSequenceFactoryNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInterchangeLevelSequenceFactoryNode) \
	NO_API virtual ~UInterchangeLevelSequenceFactoryNode();


#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_10_PROLOG
#define FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERCHANGEFACTORYNODES_API UClass* StaticClass<class UInterchangeLevelSequenceFactoryNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Interchange_Runtime_Source_FactoryNodes_Public_InterchangeLevelSequenceFactoryNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
