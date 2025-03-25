// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NavCollision.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavCollision_generated_h
#error "NavCollision.generated.h already included, missing '#pragma once' in NavCollision.h"
#endif
#define NAVIGATIONSYSTEM_NavCollision_generated_h

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavCollisionCylinder_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavCollisionCylinder>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNavCollisionBox_Statics; \
	NAVIGATIONSYSTEM_API static class UScriptStruct* StaticStruct();


template<> NAVIGATIONSYSTEM_API UScriptStruct* StaticStruct<struct FNavCollisionBox>();

#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_51_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UNavCollision, NAVIGATIONSYSTEM_API)


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUNavCollision(); \
	friend struct Z_Construct_UClass_UNavCollision_Statics; \
public: \
	DECLARE_CLASS(UNavCollision, UNavCollisionBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NAVIGATIONSYSTEM_API) \
	DECLARE_SERIALIZER(UNavCollision) \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_51_ARCHIVESERIALIZER


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVIGATIONSYSTEM_API UNavCollision(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavCollision) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVIGATIONSYSTEM_API, UNavCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavCollision); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNavCollision(UNavCollision&&); \
	UNavCollision(const UNavCollision&); \
public: \
	NAVIGATIONSYSTEM_API virtual ~UNavCollision();


#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_48_PROLOG
#define FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_51_INCLASS \
	FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavCollision>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_NavigationSystem_Public_NavCollision_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
