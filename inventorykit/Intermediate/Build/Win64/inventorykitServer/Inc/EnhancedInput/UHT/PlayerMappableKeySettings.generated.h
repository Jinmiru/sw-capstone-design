// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerMappableKeySettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENHANCEDINPUT_PlayerMappableKeySettings_generated_h
#error "PlayerMappableKeySettings.generated.h already included, missing '#pragma once' in PlayerMappableKeySettings.h"
#endif
#define ENHANCEDINPUT_PlayerMappableKeySettings_generated_h

#if WITH_EDITOR
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetKnownMappingNames);
#else // WITH_EDITOR
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerMappableKeySettings(); \
	friend struct Z_Construct_UClass_UPlayerMappableKeySettings_Statics; \
public: \
	DECLARE_CLASS(UPlayerMappableKeySettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EnhancedInput"), NO_API) \
	DECLARE_SERIALIZER(UPlayerMappableKeySettings)


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerMappableKeySettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPlayerMappableKeySettings(UPlayerMappableKeySettings&&); \
	UPlayerMappableKeySettings(const UPlayerMappableKeySettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerMappableKeySettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerMappableKeySettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerMappableKeySettings) \
	NO_API virtual ~UPlayerMappableKeySettings();


#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_15_PROLOG
#define FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_18_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENHANCEDINPUT_API UClass* StaticClass<class UPlayerMappableKeySettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
