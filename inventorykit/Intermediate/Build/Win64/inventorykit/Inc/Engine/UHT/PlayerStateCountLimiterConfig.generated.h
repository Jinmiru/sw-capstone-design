// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFramework/PlayerStateCountLimiterConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlayerStateCountLimiterConfig_generated_h
#error "PlayerStateCountLimiterConfig.generated.h already included, missing '#pragma once' in PlayerStateCountLimiterConfig.h"
#endif
#define ENGINE_PlayerStateCountLimiterConfig_generated_h

#define FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerStateCountLimiterConfig(); \
	friend struct Z_Construct_UClass_UPlayerStateCountLimiterConfig_Statics; \
public: \
	DECLARE_CLASS(UPlayerStateCountLimiterConfig, UNetObjectCountLimiterConfig, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlayerStateCountLimiterConfig)


#define FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerStateCountLimiterConfig(UPlayerStateCountLimiterConfig&&); \
	UPlayerStateCountLimiterConfig(const UPlayerStateCountLimiterConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlayerStateCountLimiterConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerStateCountLimiterConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerStateCountLimiterConfig) \
	ENGINE_API virtual ~UPlayerStateCountLimiterConfig();


#define FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h_17_PROLOG
#define FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h_20_INCLASS_NO_PURE_DECLS \
	FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlayerStateCountLimiterConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Public_GameFramework_PlayerStateCountLimiterConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
