// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/LightComponentBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef ENGINE_LightComponentBase_generated_h
#error "LightComponentBase.generated.h already included, missing '#pragma once' in LightComponentBase.h"
#endif
#define ENGINE_LightComponentBase_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSetSamplesPerPixel); \
	DECLARE_FUNCTION(execSetCastRaytracedShadows); \
	DECLARE_FUNCTION(execSetCastRaytracedShadow); \
	DECLARE_FUNCTION(execSetAffectGlobalIllumination); \
	DECLARE_FUNCTION(execSetAffectReflection); \
	DECLARE_FUNCTION(execSetCastDeepShadow); \
	DECLARE_FUNCTION(execSetCastVolumetricShadow); \
	DECLARE_FUNCTION(execGetLightColor); \
	DECLARE_FUNCTION(execSetCastShadows);


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponentBase, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULightComponentBase(); \
	friend struct Z_Construct_UClass_ULightComponentBase_Statics; \
public: \
	DECLARE_CLASS(ULightComponentBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULightComponentBase) \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULightComponentBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULightComponentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULightComponentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULightComponentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULightComponentBase(ULightComponentBase&&); \
	ULightComponentBase(const ULightComponentBase&); \
public: \
	ENGINE_API virtual ~ULightComponentBase();


#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULightComponentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
