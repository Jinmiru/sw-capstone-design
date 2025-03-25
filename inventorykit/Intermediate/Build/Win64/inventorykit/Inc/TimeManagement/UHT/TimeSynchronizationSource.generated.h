// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeSynchronizationSource.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TIMEMANAGEMENT_TimeSynchronizationSource_generated_h
#error "TimeSynchronizationSource.generated.h already included, missing '#pragma once' in TimeSynchronizationSource.h"
#endif
#define TIMEMANAGEMENT_TimeSynchronizationSource_generated_h

#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUTimeSynchronizationSource(); \
	friend struct Z_Construct_UClass_UTimeSynchronizationSource_Statics; \
public: \
	DECLARE_CLASS(UTimeSynchronizationSource, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TimeManagement"), TIMEMANAGEMENT_API) \
	DECLARE_SERIALIZER(UTimeSynchronizationSource)


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TIMEMANAGEMENT_API UTimeSynchronizationSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeSynchronizationSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TIMEMANAGEMENT_API, UTimeSynchronizationSource); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeSynchronizationSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTimeSynchronizationSource(UTimeSynchronizationSource&&); \
	UTimeSynchronizationSource(const UTimeSynchronizationSource&); \
public: \
	TIMEMANAGEMENT_API virtual ~UTimeSynchronizationSource();


#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_52_PROLOG
#define FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_INCLASS \
	FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TIMEMANAGEMENT_API UClass* StaticClass<class UTimeSynchronizationSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_TimeManagement_Public_TimeSynchronizationSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
