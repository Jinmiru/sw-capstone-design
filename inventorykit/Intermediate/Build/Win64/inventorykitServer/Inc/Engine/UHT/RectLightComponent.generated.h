// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RectLightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture;
#ifdef ENGINE_RectLightComponent_generated_h
#error "RectLightComponent.generated.h already included, missing '#pragma once' in RectLightComponent.h"
#endif
#define ENGINE_RectLightComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetBarnDoorLength); \
	DECLARE_FUNCTION(execSetBarnDoorAngle); \
	DECLARE_FUNCTION(execSetSourceHeight); \
	DECLARE_FUNCTION(execSetSourceWidth); \
	DECLARE_FUNCTION(execSetSourceTexture);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesURectLightComponent(); \
	friend struct Z_Construct_UClass_URectLightComponent_Statics; \
public: \
	DECLARE_CLASS(URectLightComponent, ULocalLightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(URectLightComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API URectLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URectLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, URectLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URectLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URectLightComponent(URectLightComponent&&); \
	URectLightComponent(const URectLightComponent&); \
public: \
	ENGINE_API virtual ~URectLightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_19_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URectLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
