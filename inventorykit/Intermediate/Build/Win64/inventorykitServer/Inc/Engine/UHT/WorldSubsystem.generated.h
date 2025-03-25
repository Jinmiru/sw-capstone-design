// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/WorldSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_WorldSubsystem_generated_h
#error "WorldSubsystem.generated.h already included, missing '#pragma once' in WorldSubsystem.h"
#endif
#define ENGINE_WorldSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldSubsystem(); \
	friend struct Z_Construct_UClass_UWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UWorldSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UWorldSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorldSubsystem(UWorldSubsystem&&); \
	UWorldSubsystem(const UWorldSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UWorldSubsystem) \
	ENGINE_API virtual ~UWorldSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_14_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorldSubsystem>();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTickableWorldSubsystem(); \
	friend struct Z_Construct_UClass_UTickableWorldSubsystem_Statics; \
public: \
	DECLARE_CLASS(UTickableWorldSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTickableWorldSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTickableWorldSubsystem(UTickableWorldSubsystem&&); \
	UTickableWorldSubsystem(const UTickableWorldSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTickableWorldSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTickableWorldSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UTickableWorldSubsystem) \
	ENGINE_API virtual ~UTickableWorldSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_52_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTickableWorldSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
