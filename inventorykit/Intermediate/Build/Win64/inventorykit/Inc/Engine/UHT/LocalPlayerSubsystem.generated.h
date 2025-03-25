// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/LocalPlayerSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LocalPlayerSubsystem_generated_h
#error "LocalPlayerSubsystem.generated.h already included, missing '#pragma once' in LocalPlayerSubsystem.h"
#endif
#define ENGINE_LocalPlayerSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocalPlayerSubsystem(); \
	friend struct Z_Construct_UClass_ULocalPlayerSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULocalPlayerSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULocalPlayerSubsystem) \
	DECLARE_WITHIN(ULocalPlayer)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULocalPlayerSubsystem(ULocalPlayerSubsystem&&); \
	ULocalPlayerSubsystem(const ULocalPlayerSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULocalPlayerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocalPlayerSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ULocalPlayerSubsystem) \
	ENGINE_API virtual ~ULocalPlayerSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_16_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_19_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULocalPlayerSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
