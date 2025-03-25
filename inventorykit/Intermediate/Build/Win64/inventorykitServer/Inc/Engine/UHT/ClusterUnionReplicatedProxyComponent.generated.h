// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/ClusterUnionReplicatedProxyComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UClusterUnionComponent;
class UPrimitiveComponent;
#ifdef ENGINE_ClusterUnionReplicatedProxyComponent_generated_h
#error "ClusterUnionReplicatedProxyComponent.generated.h already included, missing '#pragma once' in ClusterUnionReplicatedProxyComponent.h"
#endif
#define ENGINE_ClusterUnionReplicatedProxyComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_ParticleChildToParents); \
	DECLARE_FUNCTION(execOnRep_ParticleBoneIds); \
	DECLARE_FUNCTION(execOnRep_ChildClusteredComponent); \
	DECLARE_FUNCTION(execOnRep_ParentClusterUnion); \
	DECLARE_FUNCTION(execIsPendingDeletion); \
	DECLARE_FUNCTION(execMarkPendingDeletion); \
	DECLARE_FUNCTION(execSetParticleChildToParent); \
	DECLARE_FUNCTION(execGetParticleBoneIds); \
	DECLARE_FUNCTION(execSetParticleBoneIds); \
	DECLARE_FUNCTION(execSetChildClusteredComponent); \
	DECLARE_FUNCTION(execGetChildClusteredComponent); \
	DECLARE_FUNCTION(execSetParentClusterUnion); \
	DECLARE_FUNCTION(execGetParentClusterUnionComponent);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClusterUnionReplicatedProxyComponent(); \
	friend struct Z_Construct_UClass_UClusterUnionReplicatedProxyComponent_Statics; \
public: \
	DECLARE_CLASS(UClusterUnionReplicatedProxyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UClusterUnionReplicatedProxyComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ParentClusterUnion=NETFIELD_REP_START, \
		ChildClusteredComponent, \
		ParticleBoneIds, \
		ParticleChildToParents, \
		NETFIELD_REP_END=ParticleChildToParents	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UClusterUnionReplicatedProxyComponent(UClusterUnionReplicatedProxyComponent&&); \
	UClusterUnionReplicatedProxyComponent(const UClusterUnionReplicatedProxyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UClusterUnionReplicatedProxyComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClusterUnionReplicatedProxyComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClusterUnionReplicatedProxyComponent) \
	ENGINE_API virtual ~UClusterUnionReplicatedProxyComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_24_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_27_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UClusterUnionReplicatedProxyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_ClusterUnionReplicatedProxyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
