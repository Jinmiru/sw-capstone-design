// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/NetDriver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetDriver_generated_h
#error "NetDriver.generated.h already included, missing '#pragma once' in NetDriver.h"
#endif
#define ENGINE_NetDriver_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_452_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPacketSimulationSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPacketSimulationSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_634_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetDriverReplicationSystemConfig_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetDriverReplicationSystemConfig>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_697_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChannelDefinition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FChannelDefinition>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_770_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkMetricsCSV_Replication(); \
	friend struct Z_Construct_UClass_UNetworkMetricsCSV_Replication_Statics; \
public: \
	DECLARE_CLASS(UNetworkMetricsCSV_Replication, UNetworkMetricsCSV, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkMetricsCSV_Replication)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_770_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkMetricsCSV_Replication(UNetworkMetricsCSV_Replication&&); \
	UNetworkMetricsCSV_Replication(const UNetworkMetricsCSV_Replication&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkMetricsCSV_Replication); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkMetricsCSV_Replication); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkMetricsCSV_Replication)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_767_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_770_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_770_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_770_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkMetricsCSV_Replication>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_784_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNetDriver, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_784_INCLASS \
private: \
	static void StaticRegisterNativesUNetDriver(); \
	friend struct Z_Construct_UClass_UNetDriver_Statics; \
public: \
	DECLARE_CLASS(UNetDriver, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UNetDriver) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_784_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_784_STANDARD_CONSTRUCTORS \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetDriver) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetDriver(UNetDriver&&); \
	UNetDriver(const UNetDriver&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_781_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_784_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_784_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h_784_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetDriver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_NetDriver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
