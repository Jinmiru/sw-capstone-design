// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Filtering/NetObjectFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IRISCORE_NetObjectFilter_generated_h
#error "NetObjectFilter.generated.h already included, missing '#pragma once' in NetObjectFilter.h"
#endif
#define IRISCORE_NetObjectFilter_generated_h

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectFilterConfig(); \
	friend struct Z_Construct_UClass_UNetObjectFilterConfig_Statics; \
public: \
	DECLARE_CLASS(UNetObjectFilterConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), IRISCORE_API) \
	DECLARE_SERIALIZER(UNetObjectFilterConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_136_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetObjectFilterConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetObjectFilterConfig(UNetObjectFilterConfig&&); \
	UNetObjectFilterConfig(const UNetObjectFilterConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectFilterConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectFilterConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetObjectFilterConfig) \
	IRISCORE_API virtual ~UNetObjectFilterConfig();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_133_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_136_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UNetObjectFilterConfig>();

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_214_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectFilter(); \
	friend struct Z_Construct_UClass_UNetObjectFilter_Statics; \
public: \
	DECLARE_CLASS(UNetObjectFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/IrisCore"), NO_API) \
	DECLARE_SERIALIZER(UNetObjectFilter)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_214_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetObjectFilter(UNetObjectFilter&&); \
	UNetObjectFilter(const UNetObjectFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetObjectFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectFilter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNetObjectFilter) \
	NO_API virtual ~UNetObjectFilter();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_211_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_214_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_214_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h_214_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UNetObjectFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilter_h


#define FOREACH_ENUM_ENETFILTERTYPE(op) \
	op(ENetFilterType::PrePoll_Raw) \
	op(ENetFilterType::PostPoll_FragmentBased) 

enum class ENetFilterType : uint8;
template<> struct TIsUEnumClass<ENetFilterType> { enum { Value = true }; };
template<> IRISCORE_API UEnum* StaticEnum<ENetFilterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
