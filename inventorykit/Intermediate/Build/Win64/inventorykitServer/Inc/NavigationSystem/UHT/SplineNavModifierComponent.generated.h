// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SplineNavModifierComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_SplineNavModifierComponent_generated_h
#error "SplineNavModifierComponent.generated.h already included, missing '#pragma once' in SplineNavModifierComponent.h"
#endif
#define NAVIGATIONSYSTEM_SplineNavModifierComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineNavModifierComponent(); \
	friend struct Z_Construct_UClass_USplineNavModifierComponent_Statics; \
public: \
	DECLARE_CLASS(USplineNavModifierComponent, UNavModifierComponent, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(USplineNavModifierComponent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API USplineNavModifierComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USplineNavModifierComponent(USplineNavModifierComponent&&); \
	USplineNavModifierComponent(const USplineNavModifierComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, USplineNavModifierComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineNavModifierComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineNavModifierComponent) \
	NAVIGATIONSYSTEM_API virtual ~USplineNavModifierComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_14_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class USplineNavModifierComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_SplineNavModifierComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
