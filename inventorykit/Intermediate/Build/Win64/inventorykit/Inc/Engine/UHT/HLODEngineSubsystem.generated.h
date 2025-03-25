// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HLOD/HLODEngineSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_HLODEngineSubsystem_generated_h
#error "HLODEngineSubsystem.generated.h already included, missing '#pragma once' in HLODEngineSubsystem.h"
#endif
#define ENGINE_HLODEngineSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHLODEngineSubsystem(); \
	friend struct Z_Construct_UClass_UHLODEngineSubsystem_Statics; \
public: \
	DECLARE_CLASS(UHLODEngineSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UHLODEngineSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UHLODEngineSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHLODEngineSubsystem(UHLODEngineSubsystem&&); \
	UHLODEngineSubsystem(const UHLODEngineSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UHLODEngineSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHLODEngineSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHLODEngineSubsystem) \
	ENGINE_API virtual ~UHLODEngineSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_9_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_12_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UHLODEngineSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
