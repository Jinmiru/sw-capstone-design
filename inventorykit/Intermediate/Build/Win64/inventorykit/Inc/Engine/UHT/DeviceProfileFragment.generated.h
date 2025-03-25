// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeviceProfiles/DeviceProfileFragment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DeviceProfileFragment_generated_h
#error "DeviceProfileFragment.generated.h already included, missing '#pragma once' in DeviceProfileFragment.h"
#endif
#define ENGINE_DeviceProfileFragment_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUDeviceProfileFragment(); \
	friend struct Z_Construct_UClass_UDeviceProfileFragment_Statics; \
public: \
	DECLARE_CLASS(UDeviceProfileFragment, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDeviceProfileFragment) \
	static const TCHAR* StaticConfigName() {return TEXT("DeviceProfiles");} \



#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UDeviceProfileFragment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeviceProfileFragment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDeviceProfileFragment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeviceProfileFragment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDeviceProfileFragment(UDeviceProfileFragment&&); \
	UDeviceProfileFragment(const UDeviceProfileFragment&); \
public: \
	ENGINE_API virtual ~UDeviceProfileFragment();


#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_13_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_16_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDeviceProfileFragment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_DeviceProfiles_DeviceProfileFragment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
