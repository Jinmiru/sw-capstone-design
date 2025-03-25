// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavAreas/NavAreaMeta_SwitchByAgent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavAreaMeta_SwitchByAgent_generated_h
#error "NavAreaMeta_SwitchByAgent.generated.h already included, missing '#pragma once' in NavAreaMeta_SwitchByAgent.h"
#endif
#define NAVIGATIONSYSTEM_NavAreaMeta_SwitchByAgent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_SwitchByAgent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUNavAreaMeta_SwitchByAgent(); \
	friend struct Z_Construct_UClass_UNavAreaMeta_SwitchByAgent_Statics; \
public: \
	DECLARE_CLASS(UNavAreaMeta_SwitchByAgent, UNavAreaMeta, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavAreaMeta_SwitchByAgent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_SwitchByAgent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavAreaMeta_SwitchByAgent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavAreaMeta_SwitchByAgent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavAreaMeta_SwitchByAgent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavAreaMeta_SwitchByAgent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavAreaMeta_SwitchByAgent(UNavAreaMeta_SwitchByAgent&&); \
	UNavAreaMeta_SwitchByAgent(const UNavAreaMeta_SwitchByAgent&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavAreaMeta_SwitchByAgent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_SwitchByAgent_h_16_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_SwitchByAgent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_SwitchByAgent_h_19_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_SwitchByAgent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavAreaMeta_SwitchByAgent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavAreaMeta_SwitchByAgent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
