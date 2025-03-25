// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IRISCORE_NetObjectCountLimiter_generated_h
#error "NetObjectCountLimiter.generated.h already included, missing '#pragma once' in NetObjectCountLimiter.h"
#endif
#define IRISCORE_NetObjectCountLimiter_generated_h

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectCountLimiterConfig(); \
	friend struct Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics; \
public: \
	DECLARE_CLASS(UNetObjectCountLimiterConfig, UNetObjectPrioritizerConfig, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), IRISCORE_API) \
	DECLARE_SERIALIZER(UNetObjectCountLimiterConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetObjectCountLimiterConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetObjectCountLimiterConfig(UNetObjectCountLimiterConfig&&); \
	UNetObjectCountLimiterConfig(const UNetObjectCountLimiterConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectCountLimiterConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectCountLimiterConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetObjectCountLimiterConfig) \
	IRISCORE_API virtual ~UNetObjectCountLimiterConfig();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_27_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_30_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UNetObjectCountLimiterConfig>();

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectCountLimiter(); \
	friend struct Z_Construct_UClass_UNetObjectCountLimiter_Statics; \
public: \
	DECLARE_CLASS(UNetObjectCountLimiter, UNetObjectPrioritizer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IrisCore"), NO_API) \
	DECLARE_SERIALIZER(UNetObjectCountLimiter)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetObjectCountLimiter(UNetObjectCountLimiter&&); \
	UNetObjectCountLimiter(const UNetObjectCountLimiter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetObjectCountLimiter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectCountLimiter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetObjectCountLimiter) \
	NO_API virtual ~UNetObjectCountLimiter();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_67_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_70_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UNetObjectCountLimiter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h


#define FOREACH_ENUM_ENETOBJECTCOUNTLIMITERMODE(op) \
	op(ENetObjectCountLimiterMode::RoundRobin) \
	op(ENetObjectCountLimiterMode::Fill) 

enum class ENetObjectCountLimiterMode : uint32;
template<> struct TIsUEnumClass<ENetObjectCountLimiterMode> { enum { Value = true }; };
template<> IRISCORE_API UEnum* StaticEnum<ENetObjectCountLimiterMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
