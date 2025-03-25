// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LandscapeHeightfieldCollisionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ULandscapeComponent;
#ifdef LANDSCAPE_LandscapeHeightfieldCollisionComponent_generated_h
#error "LandscapeHeightfieldCollisionComponent.generated.h already included, missing '#pragma once' in LandscapeHeightfieldCollisionComponent.h"
#endif
#define LANDSCAPE_LandscapeHeightfieldCollisionComponent_generated_h

#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_44_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetRenderComponent);


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_44_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeHeightfieldCollisionComponent, LANDSCAPE_API)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_44_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeHeightfieldCollisionComponent(); \
	friend struct Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics; \
public: \
	DECLARE_CLASS(ULandscapeHeightfieldCollisionComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ULandscapeHeightfieldCollisionComponent) \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_44_ARCHIVESERIALIZER \
	DECLARE_WITHIN(ALandscapeProxy)


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ULandscapeHeightfieldCollisionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeHeightfieldCollisionComponent) \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeHeightfieldCollisionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULandscapeHeightfieldCollisionComponent(ULandscapeHeightfieldCollisionComponent&&); \
	ULandscapeHeightfieldCollisionComponent(const ULandscapeHeightfieldCollisionComponent&); \
public:


#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_39_PROLOG
#define FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_44_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_44_INCLASS \
	FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeHeightfieldCollisionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Landscape_Classes_LandscapeHeightfieldCollisionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
