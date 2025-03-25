// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GeometryCollection/GeometryCollectionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFieldNodeBase;
class UFieldSystemMetaData;
class UGeometryCollection;
class UGeometryCollectionComponent;
enum class EDamageModelTypeEnum : uint8;
enum class EGeometryCollectionPhysicsTypeEnum : uint8;
struct FChaosBreakEvent;
struct FChaosCrumblingEvent;
struct FChaosPhysicsCollisionInfo;
struct FChaosRemovalEvent;
struct FGeometryCollectionDamagePropagationData;
#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionComponent_generated_h
#error "GeometryCollectionComponent.generated.h already included, missing '#pragma once' in GeometryCollectionComponent.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionComponent_generated_h

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_61_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosBreakEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosBreakEvent, FChaosBreakEvent const& BreakEvent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_63_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosRemovalEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosRemovalEvent, FChaosRemovalEvent const& RemovalEvent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_65_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnChaosCrumblingEvent_DelegateWrapper(const FMulticastScriptDelegate& OnChaosCrumblingEvent, FChaosCrumblingEvent const& CrumbleEvent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_67_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnGeometryCollectionFullyDecayedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGeometryCollectionFullyDecayedEvent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_69_DELEGATE \
GEOMETRYCOLLECTIONENGINE_API void FOnGeometryCollectionRootMovedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGeometryCollectionRootMovedEvent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeomComponentCacheParameters_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeomComponentCacheParameters>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_400_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionRepData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionRepData>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_460_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionRepStateData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionRepStateData>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_521_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryCollectionRepDynamicData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FGeometryCollectionRepDynamicData>();

#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_1131_DELEGATE \
static GEOMETRYCOLLECTIONENGINE_API void FNotifyGeometryCollectionPhysicsStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsStateChange, UGeometryCollectionComponent* FracturedComponent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_1138_DELEGATE \
static GEOMETRYCOLLECTIONENGINE_API void FNotifyGeometryCollectionPhysicsLoadingStateChange_DelegateWrapper(const FMulticastScriptDelegate& NotifyGeometryCollectionPhysicsLoadingStateChange, UGeometryCollectionComponent* FracturedComponent);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_587_RPC_WRAPPERS \
	DECLARE_FUNCTION(execOnRep_RepDynamicData); \
	DECLARE_FUNCTION(execOnRep_RepStateData); \
	DECLARE_FUNCTION(execOnRep_RepData); \
	DECLARE_FUNCTION(execEnableRootProxyForCustomRenderer); \
	DECLARE_FUNCTION(execSetUseStaticMeshCollisionForTraces); \
	DECLARE_FUNCTION(execGetUseStaticMeshCollisionForTraces); \
	DECLARE_FUNCTION(execSetNotifyGlobalCrumblings); \
	DECLARE_FUNCTION(execSetNotifyGlobalRemovals); \
	DECLARE_FUNCTION(execSetNotifyGlobalCollision); \
	DECLARE_FUNCTION(execSetNotifyGlobalBreaks); \
	DECLARE_FUNCTION(execSetNotifyCrumblings); \
	DECLARE_FUNCTION(execSetNotifyRemovals); \
	DECLARE_FUNCTION(execSetNotifyBreaks); \
	DECLARE_FUNCTION(execApplyPhysicsField); \
	DECLARE_FUNCTION(execApplyKinematicField); \
	DECLARE_FUNCTION(execSetDamagePropagationData); \
	DECLARE_FUNCTION(execSetUseMaterialDamageModifiers); \
	DECLARE_FUNCTION(execSetDamageThreshold); \
	DECLARE_FUNCTION(execGetDamageThreshold); \
	DECLARE_FUNCTION(execSetDamageModel); \
	DECLARE_FUNCTION(execSetDensityFromPhysicsMaterial); \
	DECLARE_FUNCTION(execSetOneWayInteractionLevel); \
	DECLARE_FUNCTION(execSetGravityGroupIndex); \
	DECLARE_FUNCTION(execApplyAssetDefaults); \
	DECLARE_FUNCTION(execSetPerParticleCollisionProfileName); \
	DECLARE_FUNCTION(execSetPerLevelCollisionProfileNames); \
	DECLARE_FUNCTION(execSetAbandonedParticleCollisionProfileName); \
	DECLARE_FUNCTION(execSetEnableDamageFromCollision); \
	DECLARE_FUNCTION(execGetDebugInfo); \
	DECLARE_FUNCTION(execSetRestCollection); \
	DECLARE_FUNCTION(execGetMassAndExtents); \
	DECLARE_FUNCTION(execSetLocalRestTransforms); \
	DECLARE_FUNCTION(execGetInitialLocalRestTransforms); \
	DECLARE_FUNCTION(execIsRootBroken); \
	DECLARE_FUNCTION(execGetRootCurrentTransform); \
	DECLARE_FUNCTION(execGetRootInitialTransform); \
	DECLARE_FUNCTION(execGetRootIndex); \
	DECLARE_FUNCTION(execGetInitialLevel); \
	DECLARE_FUNCTION(execApplyAngularVelocity); \
	DECLARE_FUNCTION(execApplyLinearVelocity); \
	DECLARE_FUNCTION(execApplyBreakingAngularVelocity); \
	DECLARE_FUNCTION(execApplyBreakingLinearVelocity); \
	DECLARE_FUNCTION(execRemoveAllAnchors); \
	DECLARE_FUNCTION(execSetAnchoredByTransformedBox); \
	DECLARE_FUNCTION(execSetAnchoredByBox); \
	DECLARE_FUNCTION(execSetAnchoredByIndex); \
	DECLARE_FUNCTION(execCrumbleActiveClusters); \
	DECLARE_FUNCTION(execCrumbleCluster); \
	DECLARE_FUNCTION(execApplyInternalStrain); \
	DECLARE_FUNCTION(execApplyExternalStrain); \
	DECLARE_FUNCTION(execGetLocalBounds);


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_587_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_587_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UGeometryCollectionComponent, GEOMETRYCOLLECTIONENGINE_API)


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_587_INCLASS \
private: \
	static void StaticRegisterNativesUGeometryCollectionComponent(); \
	friend struct Z_Construct_UClass_UGeometryCollectionComponent_Statics; \
public: \
	DECLARE_CLASS(UGeometryCollectionComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GeometryCollectionEngine"), GEOMETRYCOLLECTIONENGINE_API) \
	DECLARE_SERIALIZER(UGeometryCollectionComponent) \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_587_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UGeometryCollectionComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepData=NETFIELD_REP_START, \
		RepStateData, \
		RepDynamicData, \
		NETFIELD_REP_END=RepDynamicData	}; \
	GEOMETRYCOLLECTIONENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_587_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GEOMETRYCOLLECTIONENGINE_API UGeometryCollectionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeometryCollectionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GEOMETRYCOLLECTIONENGINE_API, UGeometryCollectionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeometryCollectionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGeometryCollectionComponent(UGeometryCollectionComponent&&); \
	UGeometryCollectionComponent(const UGeometryCollectionComponent&); \
public: \
	GEOMETRYCOLLECTIONENGINE_API virtual ~UGeometryCollectionComponent();


#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_584_PROLOG
#define FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_587_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_587_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_587_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_587_INCLASS \
	FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h_587_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<class UGeometryCollectionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
