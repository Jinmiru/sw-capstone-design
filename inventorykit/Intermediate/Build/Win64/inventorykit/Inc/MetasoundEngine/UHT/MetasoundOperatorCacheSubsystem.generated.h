// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MetasoundOperatorCacheSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMetaSoundSource;
#ifdef METASOUNDENGINE_MetasoundOperatorCacheSubsystem_generated_h
#error "MetasoundOperatorCacheSubsystem.generated.h already included, missing '#pragma once' in MetasoundOperatorCacheSubsystem.h"
#endif
#define METASOUNDENGINE_MetasoundOperatorCacheSubsystem_generated_h

#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveCachedOperatorsForMetaSound); \
	DECLARE_FUNCTION(execTouchOrPrecacheMetaSound); \
	DECLARE_FUNCTION(execPrecacheMetaSound);


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMetaSoundCacheSubsystem(); \
	friend struct Z_Construct_UClass_UMetaSoundCacheSubsystem_Statics; \
public: \
	DECLARE_CLASS(UMetaSoundCacheSubsystem, UAudioEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MetasoundEngine"), NO_API) \
	DECLARE_SERIALIZER(UMetaSoundCacheSubsystem)


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMetaSoundCacheSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMetaSoundCacheSubsystem(UMetaSoundCacheSubsystem&&); \
	UMetaSoundCacheSubsystem(const UMetaSoundCacheSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMetaSoundCacheSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMetaSoundCacheSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMetaSoundCacheSubsystem) \
	NO_API virtual ~UMetaSoundCacheSubsystem();


#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_22_PROLOG
#define FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> METASOUNDENGINE_API UClass* StaticClass<class UMetaSoundCacheSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundOperatorCacheSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
