// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerMappableInputConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
class UInputMappingContext; 
class UObject;
struct FEnhancedActionKeyMapping;
#ifdef ENHANCEDINPUT_PlayerMappableInputConfig_generated_h
#error "PlayerMappableInputConfig.generated.h already included, missing '#pragma once' in PlayerMappableInputConfig.h"
#endif
#define ENHANCEDINPUT_PlayerMappableInputConfig_generated_h

#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMetadata); \
	DECLARE_FUNCTION(execIsDeprecated); \
	DECLARE_FUNCTION(execGetDisplayName); \
	DECLARE_FUNCTION(execGetConfigName); \
	DECLARE_FUNCTION(execGetMappingContexts); \
	DECLARE_FUNCTION(execResetToDefault); \
	DECLARE_FUNCTION(execGetKeysBoundToAction); \
	DECLARE_FUNCTION(execGetMappingByName); \
	DECLARE_FUNCTION(execGetPlayerMappableKeys);


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerMappableInputConfig(); \
	friend struct Z_Construct_UClass_UPlayerMappableInputConfig_Statics; \
public: \
	DECLARE_CLASS(UPlayerMappableInputConfig, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMappableInputConfig)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerMappableInputConfig(UPlayerMappableInputConfig&&); \
	UPlayerMappableInputConfig(const UPlayerMappableInputConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMappableInputConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMappableInputConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMappableInputConfig) \
	NO_API virtual ~UPlayerMappableInputConfig();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_22_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UPlayerMappableInputConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableInputConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
