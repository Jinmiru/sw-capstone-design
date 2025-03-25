// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/World.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWorldSettings;
class UDataLayerManager;
#ifdef ENGINE_World_generated_h
#error "World.generated.h already included, missing '#pragma once' in World.h"
#endif
#define ENGINE_World_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_296_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelViewportInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLevelViewportInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_357_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStartPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStartPhysicsTickFunction>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_391_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEndPhysicsTickFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	typedef FTickFunction Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEndPhysicsTickFunction>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_624_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelCollection_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLevelCollection>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_773_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamingLevelsToConsider_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStreamingLevelsToConsider>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_866_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetDataLayerManager); \
	DECLARE_FUNCTION(execK2_GetWorldSettings); \
	DECLARE_FUNCTION(execHandleTimelineScrubbed);


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_866_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWorld, NO_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_866_INCLASS \
private: \
	static void StaticRegisterNativesUWorld(); \
	friend struct Z_Construct_UClass_UWorld_Statics; \
public: \
	DECLARE_CLASS(UWorld, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UWorld) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_866_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_866_STANDARD_CONSTRUCTORS \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorld) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorld); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWorld(UWorld&&); \
	UWorld(const UWorld&); \
public:


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_863_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_866_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_866_RPC_WRAPPERS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_866_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h_866_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UWorld>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_World_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
