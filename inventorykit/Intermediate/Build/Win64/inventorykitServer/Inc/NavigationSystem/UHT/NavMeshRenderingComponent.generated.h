// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavMesh/NavMeshRenderingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavMeshRenderingComponent_generated_h
#error "NavMeshRenderingComponent.generated.h already included, missing '#pragma once' in NavMeshRenderingComponent.h"
#endif
#define NAVIGATIONSYSTEM_NavMeshRenderingComponent_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h_191_INCLASS \
private: \
	static void StaticRegisterNativesUNavMeshRenderingComponent(); \
	friend struct Z_Construct_UClass_UNavMeshRenderingComponent_Statics; \
public: \
	DECLARE_CLASS(UNavMeshRenderingComponent, UDebugDrawComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavMeshRenderingComponent)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h_191_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavMeshRenderingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavMeshRenderingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavMeshRenderingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavMeshRenderingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavMeshRenderingComponent(UNavMeshRenderingComponent&&); \
	UNavMeshRenderingComponent(const UNavMeshRenderingComponent&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavMeshRenderingComponent();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h_188_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h_191_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h_191_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h_191_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavMeshRenderingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavMesh_NavMeshRenderingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
