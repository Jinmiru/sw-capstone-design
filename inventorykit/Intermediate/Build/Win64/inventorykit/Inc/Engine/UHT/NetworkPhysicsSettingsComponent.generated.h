// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Physics/NetworkPhysicsSettingsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NetworkPhysicsSettingsComponent_generated_h
#error "NetworkPhysicsSettingsComponent.generated.h already included, missing '#pragma once' in NetworkPhysicsSettingsComponent.h"
#endif
#define ENGINE_NetworkPhysicsSettingsComponent_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsSettings_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetworkPhysicsSettings>();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsPredictiveInterpolation_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetworkPhysicsSettingsPredictiveInterpolation>();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetworkPhysicsSettingsResimulation_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetworkPhysicsSettingsResimulation>();

#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_274_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNetworkPhysicsSettingsComponent(); \
	friend struct Z_Construct_UClass_UNetworkPhysicsSettingsComponent_Statics; \
public: \
	DECLARE_CLASS(UNetworkPhysicsSettingsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNetworkPhysicsSettingsComponent)


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_274_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNetworkPhysicsSettingsComponent(UNetworkPhysicsSettingsComponent&&); \
	UNetworkPhysicsSettingsComponent(const UNetworkPhysicsSettingsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNetworkPhysicsSettingsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNetworkPhysicsSettingsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNetworkPhysicsSettingsComponent) \
	NO_API virtual ~UNetworkPhysicsSettingsComponent();


#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_271_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_274_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_274_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h_274_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNetworkPhysicsSettingsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Physics_NetworkPhysicsSettingsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
