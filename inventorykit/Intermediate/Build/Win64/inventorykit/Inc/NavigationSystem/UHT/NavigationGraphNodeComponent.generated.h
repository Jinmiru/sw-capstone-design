// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavGraph/NavigationGraphNodeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationGraphNodeComponent_generated_h
#error "NavigationGraphNodeComponent.generated.h already included, missing '#pragma once' in NavigationGraphNodeComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavigationGraphNodeComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationGraphNodeComponent(); \
	friend struct Z_Construct_UClass_UNavigationGraphNodeComponent_Statics; \
public: \
	DECLARE_CLASS(UNavigationGraphNodeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavigationGraphNodeComponent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavigationGraphNodeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationGraphNodeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationGraphNodeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationGraphNodeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationGraphNodeComponent(UNavigationGraphNodeComponent&&); \
	UNavigationGraphNodeComponent(const UNavigationGraphNodeComponent&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavigationGraphNodeComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_13_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_16_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationGraphNodeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNodeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
