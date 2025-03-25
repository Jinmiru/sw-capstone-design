// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavMesh/NavTestRenderingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavTestRenderingComponent_generated_h
#error "NavTestRenderingComponent.generated.h already included, missing '#pragma once' in NavTestRenderingComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavTestRenderingComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavTestRenderingComponent(); \
	friend struct Z_Construct_UClass_UNavTestRenderingComponent_Statics; \
public: \
	DECLARE_CLASS(UNavTestRenderingComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavTestRenderingComponent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavTestRenderingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavTestRenderingComponent(UNavTestRenderingComponent&&); \
	UNavTestRenderingComponent(const UNavTestRenderingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavTestRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavTestRenderingComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavTestRenderingComponent) \
	NO_API virtual ~UNavTestRenderingComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_120_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_123_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavTestRenderingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavTestRenderingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
