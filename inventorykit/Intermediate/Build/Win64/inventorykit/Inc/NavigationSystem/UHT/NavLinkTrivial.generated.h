// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavLinkTrivial.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavLinkTrivial_generated_h
#error "NavLinkTrivial.generated.h already included, missing '#pragma once' in NavLinkTrivial.h"
#endif
#define NAVIGATIONSYSTEM_NavLinkTrivial_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUNavLinkTrivial(); \
	friend struct Z_Construct_UClass_UNavLinkTrivial_Statics; \
public: \
	DECLARE_CLASS(UNavLinkTrivial, UNavLinkDefinition, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavLinkTrivial)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavLinkTrivial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavLinkTrivial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavLinkTrivial); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavLinkTrivial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavLinkTrivial(UNavLinkTrivial&&); \
	UNavLinkTrivial(const UNavLinkTrivial&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavLinkTrivial();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_12_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_15_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavLinkTrivial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
