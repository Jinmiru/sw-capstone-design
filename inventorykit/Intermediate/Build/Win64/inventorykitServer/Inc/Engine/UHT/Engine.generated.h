// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Engine/Engine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Engine_generated_h
#error "Engine.generated.h already included, missing '#pragma once' in Engine.h"
#endif
#define ENGINE_Engine_generated_h

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_156_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFullyLoadedPackagesInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FFullyLoadedPackagesInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_187_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelStreamingStatus_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLevelStreamingStatus>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_223_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetDriverDefinition_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNetDriverDefinition>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_256_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIrisNetDriverConfig_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FIrisNetDriverConfig>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_294_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedNetDriver_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FNamedNetDriver>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_342_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWorldContext_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FWorldContext>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_499_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatColorMapEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStatColorMapEntry>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_520_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatColorMapping_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStatColorMapping>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_544_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDropNoteInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDropNoteInfo>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_573_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenMessageString_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FScreenMessageString>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_613_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameNameRedirect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGameNameRedirect>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_626_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClassRedirect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FClassRedirect>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_657_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStructRedirect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStructRedirect>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_670_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPluginRedirect_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPluginRedirect>();

#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_719_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UEngine, ENGINE_API)


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_719_INCLASS \
private: \
	static void StaticRegisterNativesUEngine(); \
	friend struct Z_Construct_UClass_UEngine_Statics; \
public: \
	DECLARE_CLASS(UEngine, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UEngine) \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_719_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_719_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UEngine(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEngine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UEngine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEngine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEngine(UEngine&&); \
	UEngine(const UEngine&); \
public: \
	ENGINE_API virtual ~UEngine();


#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_714_PROLOG
#define FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_719_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_719_INCLASS \
	FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h_719_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UEngine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Engine_Source_Runtime_Engine_Classes_Engine_Engine_h


#define FOREACH_ENUM_EFULLYLOADPACKAGETYPE(op) \
	op(FULLYLOAD_Map) \
	op(FULLYLOAD_Game_PreLoadClass) \
	op(FULLYLOAD_Game_PostLoadClass) \
	op(FULLYLOAD_Always) \
	op(FULLYLOAD_Mutator) 

enum EFullyLoadPackageType : int;
template<> ENGINE_API UEnum* StaticEnum<EFullyLoadPackageType>();

#define FOREACH_ENUM_ETRANSITIONTYPE(op) \
	op(ETransitionType::None) \
	op(ETransitionType::Paused) \
	op(ETransitionType::Loading) \
	op(ETransitionType::Saving) \
	op(ETransitionType::Connecting) \
	op(ETransitionType::Precaching) \
	op(ETransitionType::WaitingToConnect) 

enum class ETransitionType : uint8;
template<> struct TIsUEnumClass<ETransitionType> { enum { Value = true }; };
template<> ENGINE_API UEnum* StaticEnum<ETransitionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
