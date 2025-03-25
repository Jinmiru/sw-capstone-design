// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavigationInvokerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationInvokerComponent_generated_h
#error "NavigationInvokerComponent.generated.h already included, missing '#pragma once' in NavigationInvokerComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavigationInvokerComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationInvokerComponent(); \
	friend struct Z_Construct_UClass_UNavigationInvokerComponent_Statics; \
public: \
	DECLARE_CLASS(UNavigationInvokerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavigationInvokerComponent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavigationInvokerComponent(UNavigationInvokerComponent&&); \
	UNavigationInvokerComponent(const UNavigationInvokerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavigationInvokerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationInvokerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationInvokerComponent) \
	NAVIGATIONSYSTEM_API virtual ~UNavigationInvokerComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_17_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationInvokerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationInvokerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
