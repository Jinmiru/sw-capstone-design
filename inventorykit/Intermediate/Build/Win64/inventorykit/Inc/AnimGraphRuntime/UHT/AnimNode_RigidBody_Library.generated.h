// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BoneControllers/AnimNode_RigidBody_Library.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPhysicsAsset;
enum class EAnimNodeReferenceConversionResult : uint8;
struct FAnimNodeReference;
struct FRigidBodyAnimNodeReference;
#ifdef ANIMGRAPHRUNTIME_AnimNode_RigidBody_Library_generated_h
#error "AnimNode_RigidBody_Library.generated.h already included, missing '#pragma once' in AnimNode_RigidBody_Library.h"
#endif
#define ANIMGRAPHRUNTIME_AnimNode_RigidBody_Library_generated_h

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigidBodyAnimNodeReference_Statics; \
	ANIMGRAPHRUNTIME_API static class UScriptStruct* StaticStruct(); \
	typedef FAnimNodeReference Super;


template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<struct FRigidBodyAnimNodeReference>();

#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetOverridePhysicsAsset); \
	DECLARE_FUNCTION(execConvertToRigidBodyAnimNodePure); \
	DECLARE_FUNCTION(execConvertToRigidBodyAnimNode);


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimNodeRigidBodyLibrary(); \
	friend struct Z_Construct_UClass_UAnimNodeRigidBodyLibrary_Statics; \
public: \
	DECLARE_CLASS(UAnimNodeRigidBodyLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), ANIMGRAPHRUNTIME_API) \
	DECLARE_SERIALIZER(UAnimNodeRigidBodyLibrary)


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ANIMGRAPHRUNTIME_API UAnimNodeRigidBodyLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAnimNodeRigidBodyLibrary(UAnimNodeRigidBodyLibrary&&); \
	UAnimNodeRigidBodyLibrary(const UAnimNodeRigidBodyLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ANIMGRAPHRUNTIME_API, UAnimNodeRigidBodyLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimNodeRigidBodyLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimNodeRigidBodyLibrary) \
	ANIMGRAPHRUNTIME_API virtual ~UAnimNodeRigidBodyLibrary();


#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_21_PROLOG
#define FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UAnimNodeRigidBodyLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_RigidBody_Library_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
