// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Iris/ReplicationSystem/Filtering/NetObjectGridFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IRISCORE_NetObjectGridFilter_generated_h
#error "NetObjectGridFilter.generated.h already included, missing '#pragma once' in NetObjectGridFilter.h"
#endif
#define IRISCORE_NetObjectGridFilter_generated_h

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetObjectGridFilterProfile_Statics; \
	IRISCORE_API static class UScriptStruct* StaticStruct();


template<> IRISCORE_API UScriptStruct* StaticStruct<struct FNetObjectGridFilterProfile>();

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectGridFilterConfig(); \
	friend struct Z_Construct_UClass_UNetObjectGridFilterConfig_Statics; \
public: \
	DECLARE_CLASS(UNetObjectGridFilterConfig, UNetObjectFilterConfig, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/IrisCore"), IRISCORE_API) \
	DECLARE_SERIALIZER(UNetObjectGridFilterConfig)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	IRISCORE_API UNetObjectGridFilterConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetObjectGridFilterConfig(UNetObjectGridFilterConfig&&); \
	UNetObjectGridFilterConfig(const UNetObjectGridFilterConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(IRISCORE_API, UNetObjectGridFilterConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectGridFilterConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNetObjectGridFilterConfig) \
	IRISCORE_API virtual ~UNetObjectGridFilterConfig();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_48_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UNetObjectGridFilterConfig>();

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectGridFilter(); \
	friend struct Z_Construct_UClass_UNetObjectGridFilter_Statics; \
public: \
	DECLARE_CLASS(UNetObjectGridFilter, UNetObjectFilter, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/IrisCore"), NO_API) \
	DECLARE_SERIALIZER(UNetObjectGridFilter)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetObjectGridFilter(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetObjectGridFilter(UNetObjectGridFilter&&); \
	UNetObjectGridFilter(const UNetObjectGridFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetObjectGridFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectGridFilter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UNetObjectGridFilter) \
	NO_API virtual ~UNetObjectGridFilter();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_98_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_101_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_101_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UNetObjectGridFilter>();

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_301_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectGridWorldLocFilter(); \
	friend struct Z_Construct_UClass_UNetObjectGridWorldLocFilter_Statics; \
public: \
	DECLARE_CLASS(UNetObjectGridWorldLocFilter, UNetObjectGridFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IrisCore"), NO_API) \
	DECLARE_SERIALIZER(UNetObjectGridWorldLocFilter)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_301_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetObjectGridWorldLocFilter(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetObjectGridWorldLocFilter(UNetObjectGridWorldLocFilter&&); \
	UNetObjectGridWorldLocFilter(const UNetObjectGridWorldLocFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetObjectGridWorldLocFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectGridWorldLocFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetObjectGridWorldLocFilter) \
	NO_API virtual ~UNetObjectGridWorldLocFilter();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_298_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_301_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_301_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_301_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UNetObjectGridWorldLocFilter>();

#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_324_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetObjectGridFragmentLocFilter(); \
	friend struct Z_Construct_UClass_UNetObjectGridFragmentLocFilter_Statics; \
public: \
	DECLARE_CLASS(UNetObjectGridFragmentLocFilter, UNetObjectGridFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/IrisCore"), NO_API) \
	DECLARE_SERIALIZER(UNetObjectGridFragmentLocFilter)


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_324_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNetObjectGridFragmentLocFilter(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetObjectGridFragmentLocFilter(UNetObjectGridFragmentLocFilter&&); \
	UNetObjectGridFragmentLocFilter(const UNetObjectGridFragmentLocFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetObjectGridFragmentLocFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetObjectGridFragmentLocFilter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetObjectGridFragmentLocFilter) \
	NO_API virtual ~UNetObjectGridFragmentLocFilter();


#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_321_PROLOG
#define FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_324_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_324_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h_324_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IRISCORE_API UClass* StaticClass<class UNetObjectGridFragmentLocFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectGridFilter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
