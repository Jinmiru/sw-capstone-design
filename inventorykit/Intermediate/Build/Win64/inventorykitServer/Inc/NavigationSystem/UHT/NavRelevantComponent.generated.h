// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavRelevantComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavRelevantComponent_generated_h
#error "NavRelevantComponent.generated.h already included, missing '#pragma once' in NavRelevantComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavRelevantComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetNavigationRelevancy);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNavRelevantComponent(); \
	friend struct Z_Construct_UClass_UNavRelevantComponent_Statics; \
public: \
	DECLARE_CLASS(UNavRelevantComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavRelevantComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UNavRelevantComponent*>(this); }


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavRelevantComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavRelevantComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavRelevantComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavRelevantComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavRelevantComponent(UNavRelevantComponent&&); \
	UNavRelevantComponent(const UNavRelevantComponent&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavRelevantComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_13_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavRelevantComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavRelevantComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
