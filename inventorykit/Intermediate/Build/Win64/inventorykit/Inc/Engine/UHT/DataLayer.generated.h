// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/DataLayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDataLayerRuntimeState : uint8;
enum class EDataLayerState : uint8;
struct FActorDataLayer;
struct FColor;
#ifdef ENGINE_DataLayer_generated_h
#error "DataLayer.generated.h already included, missing '#pragma once' in DataLayer.h"
#endif
#define ENGINE_DataLayer_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_53_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetInitialState); \
	DECLARE_FUNCTION(execIsInitiallyActive); \
	DECLARE_FUNCTION(execIsDynamicallyLoaded); \
	DECLARE_FUNCTION(execGetInitialRuntimeState); \
	DECLARE_FUNCTION(execIsRuntime); \
	DECLARE_FUNCTION(execGetDebugColor); \
	DECLARE_FUNCTION(execIsEffectiveVisible); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execIsInitiallyVisible); \
	DECLARE_FUNCTION(execGetDataLayerLabel); \
	DECLARE_FUNCTION(execEquals);


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUDEPRECATED_DataLayer(); \
	friend struct Z_Construct_UClass_UDEPRECATED_DataLayer_Statics; \
public: \
	DECLARE_CLASS(UDEPRECATED_DataLayer, UObject, COMPILED_IN_FLAGS(0 | CLASS_Deprecated), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDEPRECATED_DataLayer) \
	DECLARE_WITHIN(AWorldDataLayers) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDEPRECATED_DataLayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDEPRECATED_DataLayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDEPRECATED_DataLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDEPRECATED_DataLayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDEPRECATED_DataLayer(UDEPRECATED_DataLayer&&); \
	UDEPRECATED_DataLayer(const UDEPRECATED_DataLayer&); \
public: \
	ENGINE_API virtual ~UDEPRECATED_DataLayer();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_50_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_53_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_53_INCLASS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDEPRECATED_DataLayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h


#define FOREACH_ENUM_EDATALAYERSTATE(op) \
	op(EDataLayerState::Unloaded) \
	op(EDataLayerState::Loaded) \
	op(EDataLayerState::Activated) 

enum class EDataLayerState : uint8;
template<> struct TIsUEnumClass<EDataLayerState> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<EDataLayerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
