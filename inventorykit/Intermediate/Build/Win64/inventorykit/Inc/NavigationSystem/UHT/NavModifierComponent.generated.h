// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavModifierComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNavArea;
#ifdef NAVIGATIONSYSTEM_NavModifierComponent_generated_h
#error "NavModifierComponent.generated.h already included, missing '#pragma once' in NavModifierComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavModifierComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_21_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetAreaClass);


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUNavModifierComponent(); \
	friend struct Z_Construct_UClass_UNavModifierComponent_Statics; \
public: \
	DECLARE_CLASS(UNavModifierComponent, UNavRelevantComponent, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavModifierComponent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavModifierComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavModifierComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavModifierComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavModifierComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavModifierComponent(UNavModifierComponent&&); \
	UNavModifierComponent(const UNavModifierComponent&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavModifierComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_18_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_21_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_21_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavModifierComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
