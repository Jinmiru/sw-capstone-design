// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Navigation/GridPathFollowingComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_GridPathFollowingComponent_generated_h
#error "GridPathFollowingComponent.generated.h already included, missing '#pragma once' in GridPathFollowingComponent.h"
#endif
#define AIMODULE_GridPathFollowingComponent_generated_h

#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUGridPathFollowingComponent(); \
	friend struct Z_Construct_UClass_UGridPathFollowingComponent_Statics; \
public: \
	DECLARE_CLASS(UGridPathFollowingComponent, UPathFollowingComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIModule"), AIMODULE_API) \
	DECLARE_SERIALIZER(UGridPathFollowingComponent)


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	AIMODULE_API UGridPathFollowingComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridPathFollowingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(AIMODULE_API, UGridPathFollowingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridPathFollowingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGridPathFollowingComponent(UGridPathFollowingComponent&&); \
	UGridPathFollowingComponent(const UGridPathFollowingComponent&); \
public: \
	AIMODULE_API virtual ~UGridPathFollowingComponent();


#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h_20_PROLOG
#define FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h_23_INCLASS \
	FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIMODULE_API UClass* StaticClass<class UGridPathFollowingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_AIModule_Classes_Navigation_GridPathFollowingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
