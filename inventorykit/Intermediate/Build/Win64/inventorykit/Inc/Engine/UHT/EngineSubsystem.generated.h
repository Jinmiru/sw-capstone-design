// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/EngineSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_EngineSubsystem_generated_h
#error "EngineSubsystem.generated.h already included, missing '#pragma once' in EngineSubsystem.h"
#endif
#define ENGINE_EngineSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEngineSubsystem(); \
	friend struct Z_Construct_UClass_UEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UEngineSubsystem, UDynamicSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEngineSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEngineSubsystem(UEngineSubsystem&&); \
	UEngineSubsystem(const UEngineSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngineSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UEngineSubsystem) \
	ENGINE_API virtual ~UEngineSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_20_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEngineSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
