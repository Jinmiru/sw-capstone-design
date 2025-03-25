// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeviceProfiles/DeviceProfile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DeviceProfile_generated_h
#error "DeviceProfile.generated.h already included, missing '#pragma once' in DeviceProfile.h"
#endif
#define ENGINE_DeviceProfile_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUDeviceProfile(); \
	friend struct Z_Construct_UClass_UDeviceProfile_Statics; \
public: \
	DECLARE_CLASS(UDeviceProfile, UTextureLODSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDeviceProfile)


#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDeviceProfile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceProfile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDeviceProfile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceProfile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDeviceProfile(UDeviceProfile&&); \
	UDeviceProfile(const UDeviceProfile&); \
public: \
	ENGINE_API virtual ~UDeviceProfile();


#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDeviceProfile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
