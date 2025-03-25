// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Prioritization/SphereNetObjectPrioritizer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IRISCORE_SphereNetObjectPrioritizer_generated_h
#error "SphereNetObjectPrioritizer.generated.h already included, missing '#pragma once' in SphereNetObjectPrioritizer.h"
#endif
#define IRISCORE_SphereNetObjectPrioritizer_generated_h

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSphereNetObjectPrioritizerConfig(); \
	friend struct Z_Construct_UClass_USphereNetObjectPrioritizerConfig_Statics; \
public: \
	DECLARE_CLASS(USphereNetObjectPrioritizerConfig, UNetObjectPrioritizerConfig, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), NO_API) \
	DECLARE_SERIALIZER(USphereNetObjectPrioritizerConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USphereNetObjectPrioritizerConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USphereNetObjectPrioritizerConfig(USphereNetObjectPrioritizerConfig&&); \
	USphereNetObjectPrioritizerConfig(const USphereNetObjectPrioritizerConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USphereNetObjectPrioritizerConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USphereNetObjectPrioritizerConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USphereNetObjectPrioritizerConfig) \
	NO_API virtual ~USphereNetObjectPrioritizerConfig();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_13_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_16_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class USphereNetObjectPrioritizerConfig>();

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSphereNetObjectPrioritizer(); \
	friend struct Z_Construct_UClass_USphereNetObjectPrioritizer_Statics; \
public: \
	DECLARE_CLASS(USphereNetObjectPrioritizer, ULocationBasedNetObjectPrioritizer, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/IrisCore"), IRISCORE_API) \
	DECLARE_SERIALIZER(USphereNetObjectPrioritizer)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API USphereNetObjectPrioritizer(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USphereNetObjectPrioritizer(USphereNetObjectPrioritizer&&); \
	USphereNetObjectPrioritizer(const USphereNetObjectPrioritizer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, USphereNetObjectPrioritizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USphereNetObjectPrioritizer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USphereNetObjectPrioritizer) \
	IRISCORE_API virtual ~USphereNetObjectPrioritizer();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_38_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_41_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class USphereNetObjectPrioritizer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_SphereNetObjectPrioritizer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
