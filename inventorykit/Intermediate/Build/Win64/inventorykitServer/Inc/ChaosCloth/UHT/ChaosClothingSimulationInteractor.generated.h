// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ChaosCloth/ChaosClothingSimulationInteractor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHAOSCLOTH_ChaosClothingSimulationInteractor_generated_h
#error "ChaosClothingSimulationInteractor.generated.h already included, missing '#pragma once' in ChaosClothingSimulationInteractor.h"
#endif
#define CHAOSCLOTH_ChaosClothingSimulationInteractor_generated_h

#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetAndTeleport); \
	DECLARE_FUNCTION(execSetVelocityScale); \
	DECLARE_FUNCTION(execSetAnimDrive); \
	DECLARE_FUNCTION(execSetAnimDriveLinear); \
	DECLARE_FUNCTION(execSetGravity); \
	DECLARE_FUNCTION(execSetPressure); \
	DECLARE_FUNCTION(execSetWind); \
	DECLARE_FUNCTION(execSetAerodynamics); \
	DECLARE_FUNCTION(execSetDamping); \
	DECLARE_FUNCTION(execSetBackstop); \
	DECLARE_FUNCTION(execSetCollision); \
	DECLARE_FUNCTION(execSetLongRangeAttachment); \
	DECLARE_FUNCTION(execSetLongRangeAttachmentLinear); \
	DECLARE_FUNCTION(execSetMaterial); \
	DECLARE_FUNCTION(execSetMaterialLinear);


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothingInteractor(); \
	friend struct Z_Construct_UClass_UChaosClothingInteractor_Statics; \
public: \
	DECLARE_CLASS(UChaosClothingInteractor, UClothingInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosCloth"), CHAOSCLOTH_API) \
	DECLARE_SERIALIZER(UChaosClothingInteractor)


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTH_API UChaosClothingInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosClothingInteractor(UChaosClothingInteractor&&); \
	UChaosClothingInteractor(const UChaosClothingInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTH_API, UChaosClothingInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothingInteractor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothingInteractor) \
	CHAOSCLOTH_API virtual ~UChaosClothingInteractor();


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_21_PROLOG
#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_24_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSCLOTH_API UClass* StaticClass<class UChaosClothingInteractor>();

#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosClothingSimulationInteractor(); \
	friend struct Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics; \
public: \
	DECLARE_CLASS(UChaosClothingSimulationInteractor, UClothingSimulationInteractor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosCloth"), CHAOSCLOTH_API) \
	DECLARE_SERIALIZER(UChaosClothingSimulationInteractor)


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	CHAOSCLOTH_API UChaosClothingSimulationInteractor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UChaosClothingSimulationInteractor(UChaosClothingSimulationInteractor&&); \
	UChaosClothingSimulationInteractor(const UChaosClothingSimulationInteractor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCLOTH_API, UChaosClothingSimulationInteractor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosClothingSimulationInteractor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosClothingSimulationInteractor) \
	CHAOSCLOTH_API virtual ~UChaosClothingSimulationInteractor();


#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_81_PROLOG
#define FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_84_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSCLOTH_API UClass* StaticClass<class UChaosClothingSimulationInteractor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_ChaosCloth_Source_ChaosCloth_Public_ChaosCloth_ChaosClothingSimulationInteractor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
