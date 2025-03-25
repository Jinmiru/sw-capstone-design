// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavAreas/NavArea_Obstacle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavArea_Obstacle_generated_h
#error "NavArea_Obstacle.generated.h already included, missing '#pragma once' in NavArea_Obstacle.h"
#endif
#define NAVIGATIONSYSTEM_NavArea_Obstacle_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUNavArea_Obstacle(); \
	friend struct Z_Construct_UClass_UNavArea_Obstacle_Statics; \
public: \
	DECLARE_CLASS(UNavArea_Obstacle, UNavArea, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavArea_Obstacle)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavArea_Obstacle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavArea_Obstacle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavArea_Obstacle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavArea_Obstacle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavArea_Obstacle(UNavArea_Obstacle&&); \
	UNavArea_Obstacle(const UNavArea_Obstacle&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavArea_Obstacle();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h_17_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h_20_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavArea_Obstacle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_Obstacle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
