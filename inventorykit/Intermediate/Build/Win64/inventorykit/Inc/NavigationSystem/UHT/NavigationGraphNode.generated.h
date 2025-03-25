// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavGraph/NavigationGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavigationGraphNode_generated_h
#error "NavigationGraphNode.generated.h already included, missing '#pragma once' in NavigationGraphNode.h"
#endif
#define NAVIGATIONSYSTEM_NavigationGraphNode_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_16_INCLASS \
private: \
	static void StaticRegisterNativesANavigationGraphNode(); \
	friend struct Z_Construct_UClass_ANavigationGraphNode_Statics; \
public: \
	DECLARE_CLASS(ANavigationGraphNode, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(ANavigationGraphNode)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API ANavigationGraphNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavigationGraphNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, ANavigationGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavigationGraphNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANavigationGraphNode(ANavigationGraphNode&&); \
	ANavigationGraphNode(const ANavigationGraphNode&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~ANavigationGraphNode();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_13_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_16_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ANavigationGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavGraph_NavigationGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
