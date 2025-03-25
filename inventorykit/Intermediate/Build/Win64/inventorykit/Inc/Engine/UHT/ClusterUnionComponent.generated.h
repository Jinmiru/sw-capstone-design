// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/ClusterUnionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UClusterUnionComponent;
class UPrimitiveComponent;
enum class EComponentPhysicsStateChange : uint8;
#ifdef ENGINE_ClusterUnionComponent_generated_h
#error "ClusterUnionComponent.generated.h already included, missing '#pragma once' in ClusterUnionComponent.h"
#endif
#define ENGINE_ClusterUnionComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClusterUnionBoneData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClusterUnionBoneData>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClusteredComponentData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClusteredComponentData>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_113_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClusteredActorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClusteredActorData>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClusterUnionReplicatedData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClusterUnionReplicatedData>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_140_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClusterUnionPendingAddData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClusterUnionPendingAddData>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClusterUnionInitializationData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClusterUnionInitializationData>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_176_DELEGATE \
ENGINE_API void FOnClusterUnionAddedComponent_DelegateWrapper(const FMulticastScriptDelegate& OnClusterUnionAddedComponent, UPrimitiveComponent* Component, TSet<int32> const& BoneIds, bool bIsNew);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_179_DELEGATE \
ENGINE_API void FOnClusterUnionRemovedComponent_DelegateWrapper(const FMulticastScriptDelegate& OnClusterUnionRemovedComponent, UPrimitiveComponent* Component);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_182_DELEGATE \
ENGINE_API void FOnClusterUnionBoundsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnClusterUnionBoundsChanged, UClusterUnionComponent* Component, FBoxSphereBounds const& Bounds);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_212_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleComponentPhysicsStateChangePostAddIntoClusterUnion); \
	DECLARE_FUNCTION(execHandleComponentPhysicsStateChange); \
	DECLARE_FUNCTION(execOnRep_RigidState); \
	DECLARE_FUNCTION(execIsAuthority); \
	DECLARE_FUNCTION(execForceSetChildToParent); \
	DECLARE_FUNCTION(execIsComponentAdded); \
	DECLARE_FUNCTION(execSetEnableDamageFromCollision); \
	DECLARE_FUNCTION(execSetIsAnchored); \
	DECLARE_FUNCTION(execGetActors); \
	DECLARE_FUNCTION(execGetPrimitiveComponents); \
	DECLARE_FUNCTION(execRemoveComponentBonesFromCluster); \
	DECLARE_FUNCTION(execRemoveComponentFromCluster); \
	DECLARE_FUNCTION(execAddComponentToCluster);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_212_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClusterUnionComponent(); \
	friend struct Z_Construct_UClass_UClusterUnionComponent_Statics; \
public: \
	DECLARE_CLASS(UClusterUnionComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UClusterUnionComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedRigidState=NETFIELD_REP_START, \
		NETFIELD_REP_END=ReplicatedRigidState	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_212_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClusterUnionComponent(UClusterUnionComponent&&); \
	UClusterUnionComponent(const UClusterUnionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UClusterUnionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClusterUnionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClusterUnionComponent) \
	ENGINE_API virtual ~UClusterUnionComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_209_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_212_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_212_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_212_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h_212_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UClusterUnionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
