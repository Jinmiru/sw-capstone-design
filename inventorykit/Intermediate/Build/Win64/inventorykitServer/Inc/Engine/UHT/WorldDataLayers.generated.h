// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/WorldDataLayers.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataLayerInstance;
enum class EDataLayerRuntimeState : uint8;
#ifdef ENGINE_WorldDataLayers_generated_h
#error "WorldDataLayers.generated.h already included, missing '#pragma once' in WorldDataLayers.h"
#endif
#define ENGINE_WorldDataLayers_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorPlacementDataLayers_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActorPlacementDataLayers>();

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_56_RPC_WRAPPERS \
	ENGINE_API virtual void OnDataLayerRuntimeStateChanged_Implementation(const UDataLayerInstance* InDataLayer, EDataLayerRuntimeState InState); \
	DECLARE_FUNCTION(execOnRep_EffectiveLoadedDataLayerNames); \
	DECLARE_FUNCTION(execOnRep_EffectiveActiveDataLayerNames); \
	DECLARE_FUNCTION(execOnRep_LoadedDataLayerNames); \
	DECLARE_FUNCTION(execOnRep_ActiveDataLayerNames); \
	DECLARE_FUNCTION(execOnDataLayerRuntimeStateChanged);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_56_CALLBACK_WRAPPERS
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_56_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AWorldDataLayers, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_56_INCLASS \
private: \
	static void StaticRegisterNativesAWorldDataLayers(); \
	friend struct Z_Construct_UClass_AWorldDataLayers_Statics; \
public: \
	DECLARE_CLASS(AWorldDataLayers, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(AWorldDataLayers) \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_56_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<AWorldDataLayers*>(this); } \
	ENGINE_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RepActiveDataLayerNames=NETFIELD_REP_START, \
		RepLoadedDataLayerNames, \
		RepEffectiveActiveDataLayerNames, \
		RepEffectiveLoadedDataLayerNames, \
		NETFIELD_REP_END=RepEffectiveLoadedDataLayerNames	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_56_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API AWorldDataLayers(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldDataLayers) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, AWorldDataLayers); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldDataLayers); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWorldDataLayers(AWorldDataLayers&&); \
	AWorldDataLayers(const AWorldDataLayers&); \
public: \
	ENGINE_API virtual ~AWorldDataLayers();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_53_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_56_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_56_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_56_CALLBACK_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_56_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h_56_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AWorldDataLayers>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_WorldDataLayers_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
