// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LightmassPortalComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LightmassPortalComponent_generated_h
#error "LightmassPortalComponent.generated.h already included, missing '#pragma once' in LightmassPortalComponent.h"
#endif
#define ENGINE_LightmassPortalComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULightmassPortalComponent(); \
	friend struct Z_Construct_UClass_ULightmassPortalComponent_Statics; \
public: \
	DECLARE_CLASS(ULightmassPortalComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULightmassPortalComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightmassPortalComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightmassPortalComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightmassPortalComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightmassPortalComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULightmassPortalComponent(ULightmassPortalComponent&&); \
	ULightmassPortalComponent(const ULightmassPortalComponent&); \
public: \
	ENGINE_API virtual ~ULightmassPortalComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_11_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_14_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULightmassPortalComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_LightmassPortalComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
