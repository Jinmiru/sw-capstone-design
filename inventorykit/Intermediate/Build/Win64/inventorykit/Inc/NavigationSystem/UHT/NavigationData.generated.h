// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationData_generated_h
#error "NavigationData.generated.h already included, missing '#pragma once' in NavigationData.h"
#endif
#define NAVIGATIONSYSTEM_NavigationData_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSupportedAreaData_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FSupportedAreaData>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_511_INCLASS \
private: \
	static void StaticRegisterNativesANavigationData(); \
	friend struct Z_Construct_UClass_ANavigationData_Statics; \
public: \
	DECLARE_CLASS(ANavigationData, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(ANavigationData) \
	virtual UObject* _getUObject() const override { return const_cast<ANavigationData*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_511_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API ANavigationData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavigationData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANavigationData(ANavigationData&&); \
	ANavigationData(const ANavigationData&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~ANavigationData();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_508_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_511_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_511_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h_511_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ANavigationData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationData_h


#define FOREACH_ENUM_ERUNTIMEGENERATIONTYPE(op) \
	op(ERuntimeGenerationType::Static) \
	op(ERuntimeGenerationType::DynamicModifiersOnly) \
	op(ERuntimeGenerationType::Dynamic) \
	op(ERuntimeGenerationType::LegacyGeneration) 

enum class ERuntimeGenerationType : uint8;
template<> struct TIsUEnumClass<ERuntimeGenerationType> { enum { Value = true }; };
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ERuntimeGenerationType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
