// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Net/NetworkMetricsConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetworkMetricsConfig_generated_h
#error "NetworkMetricsConfig.generated.h already included, missing '#pragma once' in NetworkMetricsConfig.h"
#endif
#define ENGINE_NetworkMetricsConfig_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkMetricConfig_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetworkMetricConfig>();

#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsConfig(); \
	friend struct Z_Construct_UClass_UNetworkMetricsConfig_Statics; \
public: \
	DECLARE_CLASS(UNetworkMetricsConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkMetricsConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetworkMetricsConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkMetricsConfig(UNetworkMetricsConfig&&); \
	UNetworkMetricsConfig(const UNetworkMetricsConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkMetricsConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetworkMetricsConfig) \
	NO_API virtual ~UNetworkMetricsConfig();


#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_33_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_36_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkMetricsConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Net_NetworkMetricsConfig_h


#define FOREACH_ENUM_ENETWORKMETRICENABLEMODE(op) \
	op(ENetworkMetricEnableMode::EnableForAllReplication) \
	op(ENetworkMetricEnableMode::EnableForIrisOnly) \
	op(ENetworkMetricEnableMode::EnableForNonIrisOnly) 

enum class ENetworkMetricEnableMode : uint8;
template<> struct TIsUEnumClass<ENetworkMetricEnableMode> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ENetworkMetricEnableMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
