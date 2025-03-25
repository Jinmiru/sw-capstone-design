// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelInstance/LevelInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_LevelInstanceSubsystem_generated_h
#error "LevelInstanceSubsystem.generated.h already included, missing '#pragma once' in LevelInstanceSubsystem.h"
#endif
#define ENGINE_LevelInstanceSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelInstanceSubsystem(); \
	friend struct Z_Construct_UClass_ULevelInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(ULevelInstanceSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelInstanceSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelInstanceSubsystem(ULevelInstanceSubsystem&&); \
	ULevelInstanceSubsystem(const ULevelInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelInstanceSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULevelInstanceSubsystem)


#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_48_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_51_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
