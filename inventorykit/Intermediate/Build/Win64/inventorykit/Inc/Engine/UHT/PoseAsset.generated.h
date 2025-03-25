// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Animation/PoseAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
#ifdef ENGINE_PoseAsset_generated_h
#error "PoseAsset.generated.h already included, missing '#pragma once' in PoseAsset.h"
#endif
#define ENGINE_PoseAsset_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseData>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseAssetInfluence_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseAssetInfluence>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseAssetInfluences_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseAssetInfluences>();

#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_88_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPoseDataContainer_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPoseDataContainer>();

#if WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_186_RPC_WRAPPERS_EOD \
	DECLARE_FUNCTION(execUpdatePoseFromAnimation); \
	DECLARE_FUNCTION(execSetBasePoseName); \
	DECLARE_FUNCTION(execGetBasePoseName); \
	DECLARE_FUNCTION(execGetPoseNames); \
	DECLARE_FUNCTION(execRenamePose);
#else // WITH_EDITOR
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_186_RPC_WRAPPERS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_186_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseAsset, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_186_INCLASS \
private: \
	static void StaticRegisterNativesUPoseAsset(); \
	friend struct Z_Construct_UClass_UPoseAsset_Statics; \
public: \
	DECLARE_CLASS(UPoseAsset, UAnimationAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPoseAsset) \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_186_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_186_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPoseAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPoseAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPoseAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoseAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPoseAsset(UPoseAsset&&); \
	UPoseAsset(const UPoseAsset&); \
public: \
	ENGINE_API virtual ~UPoseAsset();


#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_183_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_186_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_186_RPC_WRAPPERS_EOD \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_186_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h_186_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPoseAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Animation_PoseAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
