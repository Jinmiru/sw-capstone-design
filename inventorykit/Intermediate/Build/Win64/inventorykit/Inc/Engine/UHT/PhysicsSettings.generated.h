// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PhysicsEngine/PhysicsSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PhysicsSettings_generated_h
#error "PhysicsSettings.generated.h already included, missing '#pragma once' in PhysicsSettings.h"
#endif
#define ENGINE_PhysicsSettings_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicalSurfaceName_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPhysicalSurfaceName>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosPhysicsSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FChaosPhysicsSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPhysicsPredictionSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPhysicsPredictionSettings>();

#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_146_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetPhysicsHistoryCount);


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_146_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsSettings(); \
	friend struct Z_Construct_UClass_UPhysicsSettings_Statics; \
public: \
	DECLARE_CLASS(UPhysicsSettings, UPhysicsSettingsCore, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPhysicsSettings)


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_146_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPhysicsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPhysicsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPhysicsSettings(UPhysicsSettings&&); \
	UPhysicsSettings(const UPhysicsSettings&); \
public: \
	ENGINE_API virtual ~UPhysicsSettings();


#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_143_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_146_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_146_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_146_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h_146_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPhysicsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsSettings_h


#define FOREACH_ENUM_ESETTINGSDOF(op) \
	op(ESettingsDOF::Full3D) \
	op(ESettingsDOF::YZPlane) \
	op(ESettingsDOF::XZPlane) \
	op(ESettingsDOF::XYPlane) 

namespace ESettingsDOF { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ESettingsDOF::Type>();

#define FOREACH_ENUM_ESETTINGSLOCKEDAXIS(op) \
	op(ESettingsLockedAxis::None) \
	op(ESettingsLockedAxis::X) \
	op(ESettingsLockedAxis::Y) \
	op(ESettingsLockedAxis::Z) \
	op(ESettingsLockedAxis::Invalid) 

namespace ESettingsLockedAxis { enum Type : int; }
template<> ENGINE_API UEnum* StaticEnum<ESettingsLockedAxis::Type>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
