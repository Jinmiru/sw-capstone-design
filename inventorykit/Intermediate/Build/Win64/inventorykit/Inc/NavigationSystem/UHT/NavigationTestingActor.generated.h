// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationTestingActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationTestingActor_generated_h
#error "NavigationTestingActor.generated.h already included, missing '#pragma once' in NavigationTestingActor.h"
#endif
#define NAVIGATIONSYSTEM_NavigationTestingActor_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_48_INCLASS \
private: \
	static void StaticRegisterNativesANavigationTestingActor(); \
	friend struct Z_Construct_UClass_ANavigationTestingActor_Statics; \
public: \
	DECLARE_CLASS(ANavigationTestingActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(ANavigationTestingActor) \
	virtual UObject* _getUObject() const override { return const_cast<ANavigationTestingActor*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API ANavigationTestingActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationTestingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavigationTestingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationTestingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANavigationTestingActor(ANavigationTestingActor&&); \
	ANavigationTestingActor(const ANavigationTestingActor&); \
public:


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_45_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_48_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ANavigationTestingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationTestingActor_h


#define FOREACH_ENUM_ENAVCOSTDISPLAY(op) \
	op(ENavCostDisplay::TotalCost) \
	op(ENavCostDisplay::HeuristicOnly) \
	op(ENavCostDisplay::RealCostOnly) 

namespace ENavCostDisplay { enum Type : int; }
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ENavCostDisplay::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
