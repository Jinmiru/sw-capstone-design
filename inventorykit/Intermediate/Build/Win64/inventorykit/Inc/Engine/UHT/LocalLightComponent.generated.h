// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LocalLightComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELightUnits : uint8;
#ifdef ENGINE_LocalLightComponent_generated_h
#error "LocalLightComponent.generated.h already included, missing '#pragma once' in LocalLightComponent.h"
#endif
#define ENGINE_LocalLightComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetUnitsConversionFactor); \
	DECLARE_FUNCTION(execSetIntensityUnits); \
	DECLARE_FUNCTION(execSetAttenuationRadius);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULocalLightComponent, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesULocalLightComponent(); \
	friend struct Z_Construct_UClass_ULocalLightComponent_Statics; \
public: \
	DECLARE_CLASS(ULocalLightComponent, ULightComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULocalLightComponent) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULocalLightComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocalLightComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULocalLightComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalLightComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULocalLightComponent(ULocalLightComponent&&); \
	ULocalLightComponent(const ULocalLightComponent&); \
public: \
	ENGINE_API virtual ~ULocalLightComponent();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULocalLightComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_LocalLightComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
