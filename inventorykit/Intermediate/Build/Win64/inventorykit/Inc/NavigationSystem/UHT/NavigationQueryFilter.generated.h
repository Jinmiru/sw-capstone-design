// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavFilters/NavigationQueryFilter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationQueryFilter_generated_h
#error "NavigationQueryFilter.generated.h already included, missing '#pragma once' in NavigationQueryFilter.h"
#endif
#define NAVIGATIONSYSTEM_NavigationQueryFilter_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationFilterArea_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavigationFilterArea>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavigationFilterFlags_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavigationFilterFlags>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_108_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationQueryFilter(); \
	friend struct Z_Construct_UClass_UNavigationQueryFilter_Statics; \
public: \
	DECLARE_CLASS(UNavigationQueryFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavigationQueryFilter)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_108_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavigationQueryFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationQueryFilter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationQueryFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationQueryFilter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationQueryFilter(UNavigationQueryFilter&&); \
	UNavigationQueryFilter(const UNavigationQueryFilter&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavigationQueryFilter();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_105_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_108_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_108_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h_108_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationQueryFilter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavFilters_NavigationQueryFilter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
