// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavLinkRenderingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavLinkRenderingComponent_generated_h
#error "NavLinkRenderingComponent.generated.h already included, missing '#pragma once' in NavLinkRenderingComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavLinkRenderingComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUNavLinkRenderingComponent(); \
	friend struct Z_Construct_UClass_UNavLinkRenderingComponent_Statics; \
public: \
	DECLARE_CLASS(UNavLinkRenderingComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavLinkRenderingComponent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavLinkRenderingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkRenderingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavLinkRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkRenderingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavLinkRenderingComponent(UNavLinkRenderingComponent&&); \
	UNavLinkRenderingComponent(const UNavLinkRenderingComponent&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavLinkRenderingComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_19_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavLinkRenderingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkRenderingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
