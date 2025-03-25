// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavAreas/NavArea_LowHeight.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavArea_LowHeight_generated_h
#error "NavArea_LowHeight.generated.h already included, missing '#pragma once' in NavArea_LowHeight.h"
#endif
#define NAVIGATIONSYSTEM_NavArea_LowHeight_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUNavArea_LowHeight(); \
	friend struct Z_Construct_UClass_UNavArea_LowHeight_Statics; \
public: \
	DECLARE_CLASS(UNavArea_LowHeight, UNavArea, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavArea_LowHeight)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavArea_LowHeight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavArea_LowHeight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavArea_LowHeight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavArea_LowHeight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavArea_LowHeight(UNavArea_LowHeight&&); \
	UNavArea_LowHeight(const UNavArea_LowHeight&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavArea_LowHeight();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_16_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_19_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavArea_LowHeight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavAreas_NavArea_LowHeight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
