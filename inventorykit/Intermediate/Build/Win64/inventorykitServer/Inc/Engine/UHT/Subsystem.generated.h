// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/Subsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Subsystem_generated_h
#error "Subsystem.generated.h already included, missing '#pragma once' in Subsystem.h"
#endif
#define ENGINE_Subsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubsystem(); \
	friend struct Z_Construct_UClass_USubsystem_Statics; \
public: \
	DECLARE_CLASS(USubsystem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USubsystem(USubsystem&&); \
	USubsystem(const USubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USubsystem) \
	ENGINE_API virtual ~USubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_46_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_49_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USubsystem>();

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDynamicSubsystem(); \
	friend struct Z_Construct_UClass_UDynamicSubsystem_Statics; \
public: \
	DECLARE_CLASS(UDynamicSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UDynamicSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_89_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDynamicSubsystem(UDynamicSubsystem&&); \
	UDynamicSubsystem(const UDynamicSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UDynamicSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDynamicSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UDynamicSubsystem) \
	ENGINE_API virtual ~UDynamicSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_86_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_89_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDynamicSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_Subsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
