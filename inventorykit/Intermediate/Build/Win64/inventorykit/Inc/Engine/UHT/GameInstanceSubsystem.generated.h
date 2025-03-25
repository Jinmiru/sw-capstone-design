// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Subsystems/GameInstanceSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_GameInstanceSubsystem_generated_h
#error "GameInstanceSubsystem.generated.h already included, missing '#pragma once' in GameInstanceSubsystem.h"
#endif
#define ENGINE_GameInstanceSubsystem_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameInstanceSubsystem(); \
	friend struct Z_Construct_UClass_UGameInstanceSubsystem_Statics; \
public: \
	DECLARE_CLASS(UGameInstanceSubsystem, USubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UGameInstanceSubsystem) \
	DECLARE_WITHIN(UGameInstance)


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameInstanceSubsystem(UGameInstanceSubsystem&&); \
	UGameInstanceSubsystem(const UGameInstanceSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UGameInstanceSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstanceSubsystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UGameInstanceSubsystem) \
	ENGINE_API virtual ~UGameInstanceSubsystem();


#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_15_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UGameInstanceSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
