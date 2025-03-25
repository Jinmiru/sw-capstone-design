// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Chaos/CacheManagerActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChaosCacheCollection;
class UPrimitiveComponent;
#ifdef CHAOSCACHING_CacheManagerActor_generated_h
#error "CacheManagerActor.generated.h already included, missing '#pragma once' in CacheManagerActor.h"
#endif
#define CHAOSCACHING_CacheManagerActor_generated_h

#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FObservedComponent_Statics; \
	CHAOSCACHING_API static class UScriptStruct* StaticStruct();


template<> CHAOSCACHING_API UScriptStruct* StaticStruct<struct FObservedComponent>();

#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnablePlayback); \
	DECLARE_FUNCTION(execEnablePlaybackByCache); \
	DECLARE_FUNCTION(execTriggerAll); \
	DECLARE_FUNCTION(execTriggerComponentByCache); \
	DECLARE_FUNCTION(execTriggerComponent); \
	DECLARE_FUNCTION(execSetCacheCollection); \
	DECLARE_FUNCTION(execResetSingleTransform); \
	DECLARE_FUNCTION(execResetAllComponentTransforms); \
	DECLARE_FUNCTION(execSetCurrentTime); \
	DECLARE_FUNCTION(execSetStartTime);


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_173_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(AChaosCacheManager, CHAOSCACHING_API)


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_173_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChaosCacheManager(); \
	friend struct Z_Construct_UClass_AChaosCacheManager_Statics; \
public: \
	DECLARE_CLASS(AChaosCacheManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosCaching"), CHAOSCACHING_API) \
	DECLARE_SERIALIZER(AChaosCacheManager) \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_173_ARCHIVESERIALIZER


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_173_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChaosCacheManager(AChaosCacheManager&&); \
	AChaosCacheManager(const AChaosCacheManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCACHING_API, AChaosCacheManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChaosCacheManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChaosCacheManager) \
	CHAOSCACHING_API virtual ~AChaosCacheManager();


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_170_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_173_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_173_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_173_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_173_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSCACHING_API UClass* StaticClass<class AChaosCacheManager>();

#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_383_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAChaosCachePlayer(); \
	friend struct Z_Construct_UClass_AChaosCachePlayer_Statics; \
public: \
	DECLARE_CLASS(AChaosCachePlayer, AChaosCacheManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChaosCaching"), CHAOSCACHING_API) \
	DECLARE_SERIALIZER(AChaosCachePlayer)


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_383_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AChaosCachePlayer(AChaosCachePlayer&&); \
	AChaosCachePlayer(const AChaosCachePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CHAOSCACHING_API, AChaosCachePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AChaosCachePlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AChaosCachePlayer) \
	CHAOSCACHING_API virtual ~AChaosCachePlayer();


#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_380_PROLOG
#define FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_383_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_383_INCLASS_NO_PURE_DECLS \
	FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h_383_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSCACHING_API UClass* StaticClass<class AChaosCachePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Plugins_Experimental_ChaosCaching_Source_ChaosCaching_Public_Chaos_CacheManagerActor_h


#define FOREACH_ENUM_ECACHEMODE(op) \
	op(ECacheMode::None) \
	op(ECacheMode::Play) \
	op(ECacheMode::Record) 

enum class ECacheMode : uint8;
template<> struct TIsUEnumClass<ECacheMode> { enum { Value = true }; };
template<> CHAOSCACHING_API UEnum* StaticEnum<ECacheMode>();

#define FOREACH_ENUM_ESTARTMODE(op) \
	op(EStartMode::Timed) \
	op(EStartMode::Triggered) 

enum class EStartMode : uint8;
template<> struct TIsUEnumClass<EStartMode> { enum { Value = true }; };
template<> CHAOSCACHING_API UEnum* StaticEnum<EStartMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
