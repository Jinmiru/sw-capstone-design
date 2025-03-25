// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/SpotLightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SpotLightComponent_generated_h
#error "SpotLightComponent.generated.h already included, missing '#pragma once' in SpotLightComponent.h"
#endif
#define ENGINE_SpotLightComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetOuterConeAngle); \
	DECLARE_FUNCTION(execSetInnerConeAngle);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUSpotLightComponent(); \
	friend struct Z_Construct_UClass_USpotLightComponent_Statics; \
public: \
	DECLARE_CLASS(USpotLightComponent, UPointLightComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USpotLightComponent)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USpotLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpotLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USpotLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpotLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USpotLightComponent(USpotLightComponent&&); \
	USpotLightComponent(const USpotLightComponent&); \
public: \
	ENGINE_API virtual ~USpotLightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_18_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_18_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USpotLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_SpotLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
