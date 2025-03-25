// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WorldPartition/DataLayer/ExternalDataLayerInjectionPolicy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_ExternalDataLayerInjectionPolicy_generated_h
#error "ExternalDataLayerInjectionPolicy.generated.h already included, missing '#pragma once' in ExternalDataLayerInjectionPolicy.h"
#endif
#define ENGINE_ExternalDataLayerInjectionPolicy_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUExternalDataLayerInjectionPolicy(); \
	friend struct Z_Construct_UClass_UExternalDataLayerInjectionPolicy_Statics; \
public: \
	DECLARE_CLASS(UExternalDataLayerInjectionPolicy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UExternalDataLayerInjectionPolicy)


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UExternalDataLayerInjectionPolicy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UExternalDataLayerInjectionPolicy(UExternalDataLayerInjectionPolicy&&); \
	UExternalDataLayerInjectionPolicy(const UExternalDataLayerInjectionPolicy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UExternalDataLayerInjectionPolicy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExternalDataLayerInjectionPolicy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExternalDataLayerInjectionPolicy) \
	NO_API virtual ~UExternalDataLayerInjectionPolicy();


#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_12_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_15_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UExternalDataLayerInjectionPolicy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_ExternalDataLayerInjectionPolicy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
